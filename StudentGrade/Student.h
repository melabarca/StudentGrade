#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	string getLetterGrade(double);
	Student(string);
	void AddGrade(double);
	double CalcAvg();
private:
	string Name;
	double TotalGrade;
};

