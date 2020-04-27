//
//  doctorType.h
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// start of the header guard
#ifndef __OOP_Final_Project__doctorType__
#define __OOP_Final_Project__doctorType__

// including header files
#include "personType.h"
#include <stdio.h>
#include <iostream>
#include <string> 

using namespace std;

// class for doctorType, derived from the class personType
class doctorType: public personType
{
protected:
    string Spec;            // variable for doctor speciality
public:
    doctorType()            // constructor to initialize the speciality variable
    {
        string Spec = " ";
    }
    // declaring functions to retrieve and return the speciality of the doctor 
    string setSpec();
    string getSpec(); 
};

// end of the header guard
#endif /* defined(__OOP_Final_Project__doctorType__) */
