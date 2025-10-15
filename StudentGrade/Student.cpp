#include "Student.h"
#include <string>
using namespace std;

Student::Student(string n)
{
	this->Name = n; //accepts strings only (name of student)
}


void Student::AddGrade(double g)
{
	this->TotalGrade + g; //adds grade values together
}

double Student::CalcAverage() 
{
	this->TotalGrade/10 // divides totalgrade by 10
}

string Student::getLetterGrade(double g)
{
	this->TotalGrade = g;
	if (g >= 100)
	{
		return "A+";
	}
	else if (g >= 93)
	{
		return "A";
	}
	else if (g>= 90)
	{
		return "A-";
	}
	else if (g >= 87)
	{
		return "B+";
	}
	else if (g>=83)
	{
		return "B";
	}
	else if(g>=80)
	{
		return "B-";
	}
	else if (g >= 77)
	{
		return "C+";
	}
	else if (g >= 73)
	{
		return "C";
	}
	else if (g >= 70)
	{
		return "C-";
	}
	else if (g >= 67)
	{
		return "D+";
	}
	else if (g>= 63)
	{
		return "D";
	}
	else if (g>= 60)
	{
		return "D-";
	}
	else
	{
		return "F";
	}
}
