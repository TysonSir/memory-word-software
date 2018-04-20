#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include<iostream>

#include"functions.h"
#include<string>
#include"Word.h"
#include<map>
#include"template_func.h"
using namespace std;

class UserInterface
{
public:
	UserInterface();
	~UserInterface();
	void menu();//main
	string search();//main
	int test();//main
	void printOption(Word word, string* option, int num=4);//WordMap
	void noWord();//WordMap
	void printSearch(Word tw);//WordMap
	int searchShowOption(); //SearchStrategyImpl
	void PleaseAddExample();//SearchStrategyImpl
	void AddExampleOK();//SearchStrategyImpl
	void SearchHistory();//SearchStrategyImpl
	void printMap(map<string, Word> history);//SearchStrategyImpl
	void answerRight();//TestStrategyImpl
	void answerWrong(int right);//TestStrategyImpl
	void testResult(int TESTNUM, int num);//TestStrategyImpl
	void testWarn(int TESTNUM);//TestStrategyImpl
private:

};

#endif
