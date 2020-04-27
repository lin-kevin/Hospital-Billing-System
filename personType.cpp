//
//  personType.cpp
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// including header files
#include <iostream>
#include <string>
#include <stdio.h>
#include "personType.h"

using namespace std;

// defining functions to retrieve and return the physician's first name 
string personType::setfName()
{
    cout << "Physician first name: ";
    cin >> fName;
    return fName;
}
string personType::getfName()
{
    string fName1;
    fName1 = fName;
    cout << fName1;
    return fName;
}

// defining functions to retrieve and return the physician's last name
string personType::setlName()
{
    cout << "Physician last name: ";
    cin >> lName; 
    return lName;
}
string personType::getlName()
{
    string lName1;
    lName1 = lName;
    cout << lName1;
    return lName;
}
