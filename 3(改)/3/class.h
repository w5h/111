#pragma once
#include<string>
#include<vector>
#include"student.h"
using namespace std;
class classa
{
public:
	classa(int n)
	{
		int i = 0;
		while (i < n) {
			student*p = new student;
			b.push_back(*p);
			i++;
		}
	}
	string classname;
	vector<student> b;
};