#ifndef MYMAP_H
#define MYMAP_H
#include<iostream>
#include<map>
#include<string>
#include"Word.h"
using namespace std;

template<class T1, class T2>
class MyMap
{
public:
	map<T1, T2> _s;
	int size(){ return _s.size(); }
	void print_map();
	int insertOne(T1 key, T2 value);
	int deleteOneByKey(T1 key);
	int updateOne(T1 key, T2 value);
	T2 selectOneByKey(T1 key);
	bool is_exist(T1 key);//ÅÐ¶ÏÔªËØ´æÔÚÐÔ

	typename map<T1, T2>::iterator _it;
	
};

template<class T1, class T2>
T2 MyMap<T1, T2>::selectOneByKey(T1 key)
{
	Word tmp;
	if (!is_exist(key))
	{
		return tmp;
	}
	return _s[key];
}

template<class T1, class T2>
int MyMap<T1, T2>::updateOne(T1 key, T2 value)
{
	if (!is_exist(key))
	{
		return 0;
	}
	_s[key] = value;
	return 1;
}

template<class T1, class T2>
int MyMap<T1, T2>::insertOne(T1 key, T2 value)
{
	if (is_exist(key))
	{
		return 0;
	}
	_s[key] = value;
	return 1;
}

template<class T1, class T2>
void MyMap<T1, T2>::print_map()
{
	for (_it = _s.begin(); _it != _s.end(); _it++)
	{
		cout << (*_it).first << "==>";
		cout << (*_it).second << endl;
	}
}

template<class T1, class T2>
bool MyMap<T1, T2>::is_exist(T1 key)
{
	_it = _s.find(key);
	if (_it == _s.end()) {
		return false;
	}
	else {
		return true;
	}
}

template<class T1, class T2>
int MyMap<T1, T2>::deleteOneByKey(T1 key)
{
	if (!is_exist(key))
	{
		return 0;
	}
	_s.erase(key);
	return 1;
}


#endif
