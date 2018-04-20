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

	word = selectById(id);//�õ���ǰ����
	//����ǰ�����������option
	int iRand = rand() % 4;//����0-3�������
	option[iRand] = word._meaning;//���λ�ø�ֵ

	//������ɸ�����id����dis
	while (dis.size() <= 3)
	{
		int r = rand() % _s.size() + 1;
		//��������ȷ���ظ�
		if (r == id)
		{
			continue;
		}
		//�������������ظ�
		if (std::find(dis.begin(), dis.end(), r) == dis.end())
		{
			dis.push_back(r);
		}

	}

	//�������option
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
	return iRand + 1;//������ȷ�����

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
