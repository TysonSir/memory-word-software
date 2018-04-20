#include"SearchStrategyImpl.h"



Word SearchStrategyImpl::searchWord(string word)
{
	if (::s.is_exist(word))
	{
		::s.print_search(word);
		recordHistory(word);

		while (true)
		{
			int flag = ui.searchShowOption();
			if (flag == 1)
			{
				addExample(word);
				::s.print_search(word);
			}
			else if (flag == 2)
			{
				searchHistory();
			}
			else
			{
				return ::s.selectOneByKey(word);
			}
		}
	}
	else
	{
		ui.noWord();
	}
	return ::s.selectOneByKey(word);
}

void SearchStrategyImpl::recordHistory(string word)
{
	map<string, Word> w;
	w[word] = ::s.selectOneByKey(word);
	write_file("history.txt",w,1);
}



void SearchStrategyImpl::addExample(string word)
{
	ui.PleaseAddExample();
	string e;
	//fflush(stdin);//windows
	setbuf(stdin, NULL);//linux
	getline(cin, e);
	
	::s._s[word]._example = e;
	ui.AddExampleOK();
}

void SearchStrategyImpl::searchHistory()
{
	ui.SearchHistory();
	map<string, Word> history;
	read_file("history.txt",history);
	ui.printMap(history);
}
