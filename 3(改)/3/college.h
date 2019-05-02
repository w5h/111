#pragma once
#include<string>
#include<vector>
#include"class.h"
class college
{
public:
	college(int m, int n)
	{
		int i = 0;
		while (i < m) {
			classa*p = new classa(n);
			a.push_back(*p);
			i++;
		}
	}
	string collegename;
	vector<classa> a;
};