//
//  Person.h
//  
//
//  Created by jason debottis on 1/26/13.
//
//

#ifndef ____Person__
#define ____Person__

#include <iostream>

#endif /* defined(____Person__) */

using namespace std;
/*
 Class Person
    purpose:
        To constuct a Person class and demonstrate the use of C++ classes in Xcode
    Author:
        Jason DeBottis
    Date:
        01/26/2013
 */
class Person{
public:
    /*
     Constructor
     */
    
    Person();
    /*
     Deonstuctor
     */
    ~Person();
    /*Method setFirstName
        Parameters : theName (the first name of the Person being set)
        Return: nothing
     */
    void setFirstName(string theName);
    /*Method setLastName
     Parameters : theName (the first name of the Person being set)
     Return: nothing
     */
    void setLastName(string theName);
    /*Method setID
     Parameters : theID (the ID of the Person being set)
     Return: nothing
     */
    void setID(int theID);
    /*Method getFirstName
        Parameters : none
        Return: first_name
     */

    string getFirstName();
    /*Method getLastName
        Parameters : none
        Return: last_name
     */
    string getLastName();
    /*Method getID
        Parameters : none
        Return: ID
     */

    int getID();
    
private:
    string first_name;//First name
    string last_name; //Last name
    int ID; // the ID
};