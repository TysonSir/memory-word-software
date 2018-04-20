#ifndef TESTSTRATEGYIMPL_H
#define TESTSTRATEGYIMPL_H


#include"TestStrategy.h"
//#define TESTNUM 4
class TestStrategyImpl :public TestStrategy
{
	
public:
	int TESTNUM;
	TestStrategyImpl() :TESTNUM(4){}
	void testWord(int rank);
	void statusUp(int id);
	void statusDown(int id);
	void randomTest();
	void randomTestInit();
	void rankTest(int rank);
};

#endif
