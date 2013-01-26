//
//  Person.cpp
//  
//
//  Created by jason debottis on 1/26/13.
//
//

#include "Person.h"
Person::Person(){
    first_name = "";
    last_name = "";
    ID = 0;
}

Person::~Person(){
    
}

void Person::setFirstName(string theName){
    first_name = theName;
}

void Person::setLastName(string theName){
    last_name = theName;
}

void Person::setID(int theID){
    ID = theID;
}

string Person::getFirstName(){
    return first_name;
}

string Person::getLastName(){
    return last_name;
}

int Person::getID(){
    return ID;
}