#include<iostream>
#include<string>
#include"class.h"
#include"college.h"
#include"student.h"
#include<sstream>
#include<vector>
using namespace std;

void fn(int a, int b)
{
	int q = 0;
	college College(a,b);
	College.collegename = "XXX college";
	cout << College.collegename << endl;
	for (int i = 0; i < a; i++)
	{
		stringstream ss;
		ss << i;
		string str = ss.str();
		College.a[i].classname = "Class" + str;
		for (int j = 0; j < b; j++,q++)
		{
			College.a[i].b[j].ID = 18000 + q;
			stringstream ss;
			ss << j;
			string str = ss.str();
			College.a[i].b[j].name = "Student" + str;
		}
	}
	for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{
				cout << "Class: " << College.a[i].classname << "    Student: " << College.a[i].b[j].name << "      ID: " << College.a[i].b[j].ID << endl;
			}
		}
	
}
int main()
{
	fn(9, 30);
	system("pause");
	return 0;
}