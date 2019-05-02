#pragma once
#include<string>
#include"student.h"
using namespace std;
extern int m;
class classa
{
public:
	classa()
	{
		Student = new student[m];
	}
	string classname;
	student* Student;
};