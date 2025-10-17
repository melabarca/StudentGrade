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

    while (x != num)
    {
        x++;
        cout << "Enter grade #" << x << ": ";
        cin >> grade;
        user.AddGrade(grade);

    }
    grade = user.CalcAvg(x);

    cout << "\nStudent: " << n;
    cout << "\nFinal Grade: " << grade;
    cout << "\nLetter Grade:" << user.getLetterGrade(grade);

}
