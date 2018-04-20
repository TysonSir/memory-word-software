#include<iostream>
#include"SearchStrategyImpl.h"
#include"TestStrategyImpl.h"
#include"EasyWord.h"
#include"Data.h"
#include"ConsoleObj.h"
using namespace std;


int main()
{
	SearchStrategyImpl SearchStrategy;
	TestStrategyImpl TestStrategy;
	EasyWord easyWord(&SearchStrategy, &TestStrategy);
	
	while (true)
	{
		ui.menu();
		int option;
		cin >> option;
		switch (option)
		{
		case 1:{
			string word = ui.search();
			easyWord.searchWord(word);
			break;
		}
		case 2:{
			int rank = ui.test();
			easyWord.testWord(rank);
			
			break;
		}
		case 3:{
			exit(0); 
		}
		default:
			break;
		}

	}
	

	system("pause");
	return 0;
}
