//
//  personType.h
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// start of the header guard
#ifndef __OOP_Final_Project__personType__
#define __OOP_Final_Project__personType__

// including header files
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// class for personType
class personType
{
protected:
    string fName;       // variable for physician first name
    string lName;       // variable for physician last name
public:
    personType()        // constructor to initialize pertinent variables
    {
        fName = " ";
        lName = " ";
    }
    // declaring functions to retrieve and return the first name of the physician
    string setfName();
    string getfName();
    
    // declaring functions to retrieve and return the last name of the physician
    string setlName();
    string getlName();
};

// end of the header guard
#endif /* defined(__OOP_Final_Project__personType__) */
