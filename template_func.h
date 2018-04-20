#ifndef TEMPLATE_FUNC_H
#define TEMPLATE_FUNC_H
#include<fstream>

//���map��ֵ
template<class T1, class T2>
void print_map(map<T1, T2>& s)
{
	typename map<T1, T2>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << (*it).second;
		cout << endl;
	}
}


//��ȡ�ļ�����
template<class T1, class T2>
bool read_file(string filename, map<T1, T2>& s, int is_print = 0)
{
	T2 wd;
	ifstream ifile(filename.c_str());
	if (ifile.fail())
	{
		cout << "file open is fail, read file fail";
		return false;
	}

	while (ifile.peek() != EOF)
	{
		ifile >> wd;
		s[wd._word] = wd;
	}
	if (is_print)print_map(s);
	ifile.close();
	return true;
}



//������д���ļ�������
template<class T1, class T2>
bool write_file(string filename, map<T1, T2>& s)
{
	ofstream ofile(filename.c_str());
	
	if (ofile.fail())
	{
		cout << "file open is fail, write file fail";
		return false;
	}
	typename map<T1, T2>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		ofile << (*it).second;
	}
	ofile.close();
	return true;
}

//������д���ļ���׷��ģʽ
template<class T1, class T2>
bool write_file(string filename, map<T1, T2>& s,int mode)
{
	
	ofstream ofile(filename.c_str(), ios::app);
	
	if (ofile.fail())
	{
		cout << "file open is fail, write file fail";
		return false;
	}
	typename map<T1, T2>::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		ofile << (*it).second;
	}
	ofile.close();
	return true;
}


#endif
