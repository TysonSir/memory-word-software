#ifndef WORDMAP_H
#define WORDMAP_H
#include<iostream>
#include"MyMap.h"
#include"functions.h"
#include"Word.h"
#include"template_func.h"
#include"ConsoleObj.h"
#include<list>
#include<vector>
#include <algorithm>

class WordMap :public MyMap<string, Word>
{
public:
	WordMap();
	~WordMap();
	WordMap(map<string, Word> s) { _s = s; }
	void print_search(string word);//��ѯ����
	int print_test(int id);//���ɲ�����
	Word selectById(int id);//��id��ѯ����
	int getStatusById(int id);
	void setStatusById(int id, int status);
	map<string, Word> getAllByStatus(int status);
	vector<int> getAllId();
private:

};


#endif // !WORDMAP_H




