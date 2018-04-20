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
	void print_search(string word);//查询单词
	int print_test(int id);//生成测试题
	Word selectById(int id);//按id查询单词
	int getStatusById(int id);
	void setStatusById(int id, int status);
	map<string, Word> getAllByStatus(int status);
	vector<int> getAllId();
private:

};


#endif // !WORDMAP_H




