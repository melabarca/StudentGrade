#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

int main()
{/*

   MUST:

    The program must allow the user to enter the number
    of grades to control the loop (counter controlled).
    */

    string n;
    double grade;
    int num;
    int x = 0;
    cout << "CALCULATE YOUR FINAL GRADE\n\n";
    cout << "===================================\n\n";
    cout << "Welcome, student. \nWhat is your first name? ";
    getline(cin, n);
    Student user(n);

    cout << "How many grades will you enter?: ";
    cin >> num;
    cout << "\n\n";

    /*
    After the loop is finished it must invoke the
    function CalcAverage to obtain the final average,
    then invoke the function GetLetterGrade (see rubrics). */
    Student.CalcAvg();

    } while (x != num);

    cout << "\nStudent: " << n;
    cout << "\nFinal Grade: " << grade;
    cout << "\nLetter Grade:" << user.getLetterGrade(grade);

    //accumulator AddGrade(double)
    //CalcAvg() gets grades and divides by 10 then returns to you
    //use average to run getLetterGrade(double)
    //then evaluate grade using if statements
}
