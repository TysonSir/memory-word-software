#include"TestStrategyImpl.h"

#include"Data.h"
#include"ConsoleObj.h"

void TestStrategyImpl::testWord(int rank)
{
	if (rank == 0)
	{
		randomTest();
	}
	else
	{
		rankTest(rank);
	}

}

void TestStrategyImpl::randomTest()
{
	randomTestInit();
	srand((int)time(0));
	int beginId = random(1, s.size() - TESTNUM);
	int num = 0;
	for (int i = 1; i <= TESTNUM; i++)
	{
		int id = beginId + i;
		cout << i << ". ";
		int right = s.print_test(id);
		int select;
		cin >> select;
		if (select == right)
		{
			ui.answerRight();
			num++;
			statusDown(id);
		}
		else
		{
			ui.answerWrong(right);
			statusUp(id);
		}
	}

	ui.testResult(TESTNUM,num);
	
}

void TestStrategyImpl::randomTestInit()
{
	ui.testWarn(TESTNUM);
}

void TestStrategyImpl::statusUp(int id)
{
	int status = s.getStatusById(id);
	if (status < 3)
	{
		s.setStatusById(id,status+1);
	}
}

void TestStrategyImpl::statusDown(int id)
{
	int status = s.getStatusById(id);
	if (status > 0)
	{
		s.setStatusById(id, status - 1);
	}
}

void TestStrategyImpl::rankTest(int rank)
{
	randomTestInit();
	//得到指定等级的单词数据
	WordMap ss;
	ss._s = s.getAllByStatus(rank);
	//获得单词id
	vector<int> ids;
	vector<int>::iterator it;
	ids = ss.getAllId();
	srand((int)time(0));
	int beginPlace = random(1, ids.size() - TESTNUM);
	int num = 0;
	for (int i = 1; i <= TESTNUM; i++)
	{
		int id = ids[beginPlace + i];
		cout << i << ". ";
		int right = s.print_test(id);
		int select;
		cin >> select;
		if (select == right)
		{
			ui.answerRight();
			num++;
			statusDown(id);
		}
		else
		{
			ui.answerWrong(right);
			statusUp(id);
		}
	}

	ui.testResult(TESTNUM,num);

}

