//
//  patientType.cpp
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// including header files
#include <iostream>
#include <string>
#include <stdio.h>
#include "patientType.h"
#include "personType.h"

using namespace std;

// defining functions to retrieve and return the ID of the patient 
int patientType::setID ()
{
    cout << "ID: ";
    cin >> ID;
    return 0;
}
int patientType::getID ()
{
    int ID1;
    ID1 = ID;
    cout << ID1;
    return 0; 
}

// defining functions to retrieve and return the age of the patient
int patientType::setAge()
{
    cout << "Age: ";
    cin >> Age;
    return 0;
}
int patientType::getAge()
{
    int Age1;
    Age1 = Age;
    cout << Age1;
    return 0;
}

// defining functions to retrieve and return the date of birth of the patient
string patientType::setDOB ()
{
    cout << "Date of birth (mmddyy): ";
    cin >> DOB;
    return DOB;
}
string patientType::getDOB()
{
    string DOB1;
    DOB1 = DOB;
    cout << DOB1;
    return DOB;
}

// defining functions to retrieve and return the date of admission into the hospital of the patient
string patientType::setDOA ()
{
    cout << "Date of hospital admission (mmddyy): ";
    cin >> DOA;
    return DOA;
}
string patientType::getDOA()
{
    string DOA1;
    DOA1 = DOA;
    cout << DOA1;
    return DOA;
}

// defining functions to retrieve and return the date of discharge from the hospital of the patient
string patientType::setDOD()
{
    cout << "Date of hospital discharge (mmddyy): ";
    cin >> DOD;
    return DOD;
}
string patientType::getDOD()
{
    string DOD1;
    DOD1 = DOD;
    cout << DOD1;
    return DOD;
}
