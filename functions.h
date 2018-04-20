#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<fstream>
#include<iostream>
#include<ctime>
#include<string>
#include <cstdlib>
#include"Word.h"
using namespace std;
//遍历一次替换字符串
extern string& replace_all_distinct(string& str, const string& old_value, const string& new_value);
//生成随机整数
extern int random(int start, int end);
//输出变量
extern ostream& operator<<(ostream& out, const Word& s);
//重载输出流运算符
extern ofstream& operator<<(ofstream& ofile, Word& word);
//重载输入流运算符
extern ifstream& operator>> (ifstream& in, Word& word);

#endif
