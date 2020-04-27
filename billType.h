//
//  billType.h
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// start of the header guard
#ifndef __OOP_Final_Project__billType__
#define __OOP_Final_Project__billType__

// including header files
#include <stdio.h>
#include <iostream> 
#include <string>

using namespace std;

// class for billType
class billType
{
protected:
    double MedChg;          // variable for medicine fees
    double DrF;             // variable for doctor fees
    double RmChg;           // variable for room fees 
public:
    billType()              // constructor to initialize pertinent variables
    {
        MedChg = 5;
        DrF = 0;
        RmChg = 0;
    }
    // declaring functions to retrieve and return the medicine fee information
    double setMedChg();
    double getMedChg();
    
    // declaring functions to retrieve and return the doctor fee information
    double setDrF();
    double getDrF();
    
    // declaring functions to retrieve and return the room fee information
    double setRmChg();
    double getRmChg();
};

// end of the header guard
#endif /* defined(__OOP_Final_Project__billType__) */
