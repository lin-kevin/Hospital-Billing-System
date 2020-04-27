//
//  billType.cpp
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// including header files
#include <iostream> 
#include <string>
#include <stdio.h>
#include "billType.h"

using namespace std;

// defining functions to retrieve and return the medicine fee information
double billType::setMedChg()
{
    cout << "Medicine Charges: ";
    cin >> MedChg;
    return 0;
}
double billType::getMedChg()
{
    double MedChg1;
    MedChg1 = MedChg;
    cout << MedChg1;
    return 0;
}

// defining functions to retrieve and return the doctor fee information
double billType::setDrF()
{
    cout << "Doctor Fee: ";
    cin >> DrF;
    return 0;
}
double billType::getDrF()
{
    double DrF1;
    DrF1 = DrF;
    cout << DrF1;
    return 0;
}

// defining functions to retrieve and return the room fee information
double billType::setRmChg()
{
    cout << "Room Charges: ";
    cin >> RmChg;
    return 0;
}
double billType::getRmChg()
{
    double RmChg1;
    RmChg1 = RmChg; 
    cout << RmChg1;
    return 0;
}

