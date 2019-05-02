#include<iostream>
#include<string>
#include"class.h"
#include"college.h"
#include"student.h"
#include<sstream>
using namespace std;
int m;
college fn(int a,int b)
{
	int q = 0;
	m = b;
	college* p;
	college College(a);
	p = &College;
	p->collegename = "XXX大学";
	for (int i = 0; i < a; i++)
	{
		stringstream ss;
		ss << i;
		string str = ss.str();
		p->Class[i].classname = "班级" + str;
		for (int j=0; j < b; j++,q++)
		{
			p->Class[i].Student[j].ID = q + 18000;
			stringstream ss;
			ss << j;
			string str = ss.str();
			p->Class[i].Student[j].name = "学生" + str;
		}
		
	}
	return College;
}
int main()
{
	college p = fn(12, 30);
	cout << p.collegename << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			cout << "班级名：" << p.Class[i].classname << "      学生名：" << p.Class[i].Student[j].name <<"     学号:" << p.Class[i].Student[j].ID << endl;
		}
	}
	system("pause");
	return 0;
}