#include "Student.h"

Student::Student(string n)
{
	this->Name = n; //accepts strings only (name of student)
	this->TotalGrade = 0;
	
}

void Student::AddGrade(double grade)//adds grade values together
{
	this->TotalGrade += grade;
}

double Student::CalcAvg(int num)// divides totalgrade by 10
{
	return this->TotalGrade = this->TotalGrade / num; 
}

string Student::getLetterGrade(double grade)
{
	this->TotalGrade = grade;
	if (grade >= 100)
	{
		return "A+";
	}
	else if (grade >= 93)
	{
		return "A";
	}
	else if (grade>= 90)
	{
		return "A-";
	}
	else if (grade >= 87)
	{
		return "B+";
	}
	else if (grade>=83)
	{
		return "B";
	}
	else if(grade>=80)
	{
		return "B-";
	}
	else if (grade >= 77)
	{
		return "C+";
	}
	else if (grade >= 73)
	{
		return "C";
	}
	else if (grade >= 70)
	{
		return "C-";
	}
	else if (grade >= 67)
	{
		return "D+";
	}
	else if (grade>= 63)
	{
		return "D";
	}
	else if (grade>= 60)
	{
		return "D-";
	}
	else
	{
		return "F";
	}
}