//
//  patientType.h
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// start of the header guard
#ifndef __OOP_Final_Project__patientType__
#define __OOP_Final_Project__patientType__

// including header files
#include "personType.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// class for patientType, derived from the class personType
class patientType: public personType
{
protected:
    int ID;                 // variable for patient ID
    int Age;                // variable for patient age
    string DOB;             // variable for patient date of birth
    string DOA;             // variable for patient date of admission into the hospital
    string DOD;             // variable for patient date of discharge from the hospital 
    
public:
    patientType()           // constructor to initialize pertinent variables
    {
        fName = " ";
        lName = " ";
        DOB = "000000";
        DOA = "000000";
        DOD = "000000";
    }
    // declaring functions to retrieve and return the ID of the patient
    int setID();
    int getID();
    
    // declaring functions to retrieve and return the age of the patient
    int setAge();
    int getAge();
    
    // declaring functions to retrieve and return the date of birth of the patient
    string setDOB();
    string getDOB();
    
    // declaring functions to retrieve and return the date of admission into the hospital of the patient
    string setDOA();
    string getDOA();
    
    // declaring functions to retrieve and return the date of discharge from the hospital of the patient
    string setDOD();
    string getDOD();
};

// end of the header guard
#endif /* defined(__OOP_Final_Project__patientType__) */
