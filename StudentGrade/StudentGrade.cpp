#include "Student.h"
#include <string>
#include <iostream>
using namespace std;
/*Develop a C++ Application to allow a Instructor to enter the 
name of 1 student and then allow the user to enter 10 grades 
(from 0 to 100) after all grades are entered to program 
should calculate the final average grade and 
the final letter grade */

int main()
{
    string n;
    double grade;
    int numGrade=1;

    cout << "Welcome, student. What is your first name? ";
    cin >> n;
    Student Student(n);

    cout << "Enter the number of grades you will input: ";
    cin >> numGrade;

    while (numGrade<=10)
    {
        Student.AddGrade(grade);
    }
    
   /*
  
   MUST:

    The program must allow the user to enter the number 
    of grades to control the loop (counter controlled). 
    */
    


   //while loop
    /*	
    In order to enter the grades the main application 
    must use a loop (while loop). 
    Inside the loop the program should ask the user 
    to enter the grade, then invoke the function AddGrade 
    to accumulate the grades. */

    

    /*
    After the loop is finished it must invoke the
    function CalcAverage to obtain the final average,
    then invoke the function GetLetterGrade (see rubrics). */
    Student.CalcAvg();

    /* 
    Finally, the main program must print the name of 
    the student,the final grade, and the letter grade.*/
    Student.getLetterGrade(grade);


    //accumulator AddGrade(double)
    //CalcAvg() gets grades and divides by 10 then returns to you
    //use average to run getLetterGrade(double)
    //then evaluate grade using if statements
}
