#ifndef TESTSTRATEGY_H
#define TESTSTRATEGY_H

#include<string>
#include"Word.h"
#include"WordMap.h"
#include<vector>
class TestStrategy :public WordMap
{
public:
	virtual void testWord(int rank) = 0;

};

#endif
