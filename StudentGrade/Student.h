#pragma once
#include <iostream>
using namespace std;

class Student
{
public:
	Student(string);
	string getLetterGrade(double);
	void AddGrade(double);
	double CalcAvg(int);
private:
	string Name;
	double TotalGrade;
};