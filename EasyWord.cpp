#include"EasyWord.h"

EasyWord::EasyWord(SearchStrategy* searchStrategy, TestStrategy* testStrategy)
	:m_searchStrategy(searchStrategy), m_testStrategy(testStrategy)
{ }



void EasyWord::searchWord(string word)
{
	m_searchStrategy->searchWord(word);
}

void EasyWord::testWord(int rank)
{
	m_testStrategy->testWord(rank);
}


