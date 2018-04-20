#include"functions.h"
//�ַ����滻
string& replace_all_distinct(string& str, const string& old_value, const string& new_value)
{
	for (string::size_type pos(0); pos != string::npos; pos += new_value.length())   {
		if ((pos = str.find(old_value, pos)) != string::npos)
			str.replace(pos, old_value.length(), new_value);
		else break;
	}
	return str;
}
//�����������,ȡ����end
int random(int start, int end)
{
	//srand(time(0));
	int tmp;
	int w = end - start;
	tmp = rand() % w + start;
	return tmp;
}

//�������
ostream& operator<<(ostream& out, const Word& s)
{
	out << "_word: " << s._word << "  ";
	out << "_meaning: " << s._meaning << endl;
	out << "_example: " << s._example << endl;
	out << "_status: " << s._status << "  ";
	out << "_id: " << s._id << endl;
	//out << s._word << "  " << s._meaning << "  " << s._example << "  " << s._status << "  " << s._id << endl;
	return out;
}


//��������������
ofstream& operator<<(ofstream& ofile, Word& word)
{
	//������Ŀո��滻���»��ߣ���������
	word._example = replace_all_distinct(word._example, " ", "_");
	word._meaning = replace_all_distinct(word._meaning, " ", "_");
	ofile << word._word << " ";
	ofile << word._meaning << " ";
	ofile << word._example << " ";
	ofile << word._status << " ";
	ofile << word._id << "\n";

	return ofile;
}


//���������������
ifstream& operator>> (ifstream& in, Word& word)
{

	in >> word._word >> word._meaning >> word._example >> word._status >> word._id;
	word._example = replace_all_distinct(word._example, "_", " ");
	word._meaning = replace_all_distinct(word._meaning, "_", " ");
	return in;
}
