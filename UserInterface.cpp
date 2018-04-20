#include"UserInterface.h"

UserInterface::UserInterface()
{
}

UserInterface::~UserInterface()
{
}

void UserInterface::menu()
{
	//system("cls");
	cout << "\n" << endl;
	cout << "***** ***** EasyWord ***** *****" << endl;
	cout << "***** ***** ******** ***** *****" << endl;
	cout << "***** *** 1. 单词查询 **** *****" << endl;
	cout << "***** *** 2. 单词测试 **** *****" << endl;
	cout << "***** *** 3. 退出程序 **** *****" << endl;
	cout << "***** ***** ******** ***** *****" << endl;
}

string UserInterface::search()
{
	cout << "####### 单词查询 #######" << endl;
	cout << "请输入要查询的单词：";
	string word;
	cin >> word;
	return word;
}

int UserInterface::test()
{
	cout << "####### 单词测试 #######" << endl;
	cout << " ## 0.随机测试 ## 1.初级测试 ## 2.中级测试 ## 3.高级测试 ## " << endl;
	int r;
	cin >> r;
	return r;
}

void UserInterface::printOption(Word word, string* option, int num)
{
	cout << "请选择 " << word._word << " 的含义：" << endl;
	cout << "1. " << option[0] << endl;
	cout << "2. " << option[1] << endl;
	cout << "3. " << option[2] << endl;
	cout << "4. " << option[3] << endl;
}

void UserInterface::noWord()
{
	cout << "对不起，您查找的单词不存在！" << endl;
}

void UserInterface::printSearch(Word tw)
{
	cout << "--->  " << tw._word << "  <--- " << endl;
	cout << "结果： " << tw._meaning << endl;
	cout << "例句： " << tw._example << endl;
}

int UserInterface::searchShowOption()
{
	cout << " ### 1.修改例句 ### 2.查询历史 ### 3.返回主菜单 ###" << endl;
	int choose;
	cin >> choose;
	return choose;
}

void UserInterface::PleaseAddExample()
{
	cout << "请输入要添加的例句：" << endl;
}
void UserInterface::AddExampleOK()
{
	cout << "例句添加成功！" << endl;
}
void UserInterface::SearchHistory()
{
	cout << "以下为单词查询历史纪录：" << endl;
}
void UserInterface::printMap(map<string, Word> history)
{
	print_map(history);
}

void UserInterface::answerRight()
{
	cout << "回答正确！" << endl;
}

void UserInterface::answerWrong(int right)
{
	cout << "回答错误，正确答案是 " << right << endl;
}

void UserInterface::testResult(int TESTNUM, int num)
{
	cout << endl;
	cout << "测试完成，本次测试共 " << TESTNUM << " 小题" << endl;
	cout << "正确 " << num << " 题";
	cout << "错误 " << TESTNUM - num << " 题";
	float ac = num*1.0 / TESTNUM;
	cout << "正确率 " << ac * 100 << "%";
}

void UserInterface::testWarn(int TESTNUM)
{
	cout << " @ 本次测试共 " << TESTNUM << " 小题" << endl;
	cout << " @ 请选择正确答案：" << endl;
	cout << endl;
}





