#ifndef SEARCHSTRATEGYIMPL_H
#define SEARCHSTRATEGYIMPL_H
#include"SearchStrategy.h"
#include"template_func.h"
class SearchStrategyImpl : public SearchStrategy
{
public:
	Word searchWord(string word);
	void recordHistory(string word);
	
	void addExample(string word);
	void searchHistory();
};


#endif
