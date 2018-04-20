#ifndef EASYWORD_H
#define EASYWORD_H
#include"SearchStrategy.h"
#include"TestStrategy.h"
#include<string>
using namespace std;
class EasyWord
{
public:

	EasyWord(SearchStrategy* searchStrategy, TestStrategy* testStrategy);
	
	void searchWord(string word);
	void testWord(int rank);

private:
	//WordMap m_s;
	SearchStrategy* m_searchStrategy;
	TestStrategy* m_testStrategy;
	
};

#endif


