#ifndef WORD_H
#define WORD_H
#include<string>
#include<fstream>
using namespace std;

class Word
{
public:
	string _word;
	string _meaning;
	string _example;
	int _status;
	int _id;
	Word() :_word(""), _meaning(""), _example(""), _status(0), _id(0){}
	Word(string word, string meaning, string example, int status, int id) :
		_word(word), _meaning(meaning), _example(example), _status(status), _id(id){}
	friend ostream& operator<< (ostream& out, const Word& s);
	friend ofstream& operator<< (ofstream& ofile, Word& word);
	friend ifstream& operator>> (ifstream& ifile, Word& word);
	friend class WordMap;
};


#endif
