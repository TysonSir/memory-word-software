#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<fstream>
#include<iostream>
#include<ctime>
#include<string>
#include <cstdlib>
#include"Word.h"
using namespace std;
//����һ���滻�ַ���
extern string& replace_all_distinct(string& str, const string& old_value, const string& new_value);
//�����������
extern int random(int start, int end);
//�������
extern ostream& operator<<(ostream& out, const Word& s);
//��������������
extern ofstream& operator<<(ofstream& ofile, Word& word);
//���������������
extern ifstream& operator>> (ifstream& in, Word& word);

#endif
