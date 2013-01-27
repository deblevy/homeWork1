//
//  Student.cpp
//  
//
//  Created by Deborah Levy on 1/27/13.
//
//

#include "Student.h"

Student::Student()
{
    GPA = 0.0;
    grad_year = 0;
    major = "";
}

Student::~Student()
{
    
}

void Student::setGPA(float theGPA)
{
    GPA = theGPA;
}

void Student::setGradYear(int theGradYear){
  grad_year = theGradYear;
}

void Student::setMajor(string theMajor){
	major = theMajor;
}

int Student::getGPA()
{
	return GPA;
}

int Student::getGradYear()
{
	return grad_year;
}

string Student::getMajor()
{
	return major;
}
