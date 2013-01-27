//
//  Student.h
//  
//
//  Created by Deborah Levy on 1/27/13.
//
//

#ifndef ____Student__
#define ____Student__

#include <iostream>

#endif /* defined(____Student__) */

using namespace std;
/*
    Class Student
        purpose: To construct a Student class and demonstrat the use of C++ in Xcode.
        Author: Deborah Levy
        Date: 1.27.13
*/
class Student
{
public:
    Student(); //Constructor
    
    ~Student(); //Deconstuctor
    
    //setGPA parameters: theGPA(the GPA of the Student)
    //does not return anything
    void setGPA(float theGPA);
    
    //setGradYear parameters: theGradYear(the year that the student is going to graduate.)
    //does not return anything
    void setGradYear(int theGradYear);
    
    //setMajor parameters: theMajor(the major of the student.)
    //does not return anything
    void setMajor(string theMajor);
    
    //getGPA has no parameters and returns GPA
    float getGPA();
    
    //getGradYear has no parameters and returns grad_year
    int getGradYear();
    
    //getMajor has no parameters and returns major
    string getMajor();

private:
    float GPA;// Grade Point Average
    int grad_year; //Grad Year
    string major; //Major
}
