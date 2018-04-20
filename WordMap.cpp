#include"WordMap.h"

vector<int> WordMap::getAllId()
{
	vector<int> ids;
	for (_it = _s.begin(); _it != _s.end(); _it++)
	{
		ids.push_back((*_it).second._id);
	}

	return ids;
}

map<string, Word> WordMap::getAllByStatus(int status)
{
	map<string, Word> ss;
	for (_it = _s.begin(); _it != _s.end(); _it++)
	{
		if ((*_it).second._status = status)
		{
			ss[(*_it).first] = (*_it).second;
		}
	}

	return ss;
}


int WordMap::getStatusById(int id)
{
	return selectById(id)._status;
}

void WordMap::setStatusById(int id,int status)
{
	_s[selectById(id)._word]._status = status;
}


Word WordMap::selectById(int id)
{
	map<string, Word>::iterator it;
	Word tmp;
	for (it = _s.begin(); it != _s.end(); it++)
	{
		if ((*it).second._id == id)
		{
			return (*it).second;
		}
	}
	return tmp;
}



int WordMap::print_test(int id)
{
	srand((int)time(0));
	Word word;

	string option[4];
	list<int> dis;

	word = selectById(id);//得到当前单词
	//将当前单词释义放入option
	int iRand = rand() % 4;//生成0-3的随机数
	option[iRand] = word._meaning;//随机位置赋值

	//随机生成干扰项id填满dis
	while (dis.size() <= 3)
	{
		int r = rand() % _s.size() + 1;
		//避免与正确项重复
		if (r == id)
		{
			continue;
		}
		//避免与其它项重复
		if (std::find(dis.begin(), dis.end(), r) == dis.end())
		{
			dis.push_back(r);
		}

	}

	//填充干扰项到option
	Word tt;
	for (int i = 0; i < 4; i++)
	{
		if (i != iRand)
		{
			Word tt = selectById(dis.back());
			dis.pop_back();
			option[i] = tt._meaning;
		}
	}

	ui.printOption(word,option,4); 
	return iRand + 1;//返回正确项序号

}




void WordMap::print_search(string word)
{
	Word tw;
	tw = selectOneByKey(word);
	if (tw._word == "")
	{
		ui.noWord();
	}
	else
	{
		ui.printSearch(tw);
	}
}

WordMap::WordMap()
{
	read_file("data.txt",_s);
}

WordMap::~WordMap()
{
	write_file("data.txt", _s);
}
