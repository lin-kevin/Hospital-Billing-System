//
//  doctorType.cpp
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// including header files
#include <iostream>
#include <string>
#include <stdio.h>
#include "doctorType.h"
#include "personType.h"

using namespace std;

// defining functions to retrieve and return the speciality of the doctor 
string doctorType::setSpec()
{
    cout << "Doctor speciality: ";
    cin >> Spec;
    return Spec;
}
string doctorType::getSpec()
{
    string Spec1;
    Spec1 = Spec; 
    cout << Spec1;
    return Spec;
}
