#ifndef SEARCHSTRATEGY_H
#define SEARCHSTRATEGY_H
#include<iostream>
#include<string>
using namespace std;

#include"WordMap.h"
#include"Data.h"
#include"ConsoleObj.h"
class SearchStrategy
{
public:
	
	virtual Word searchWord(string word) = 0;
	virtual void recordHistory(string word) = 0;
};
#endif
