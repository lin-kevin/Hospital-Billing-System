//
//  main.cpp
//  OOP Final Project
//
//  Created by Kevin Lin on 3/5/18.
//  Copyright (c) 2018 Kevin Lin. All rights reserved.
//

// including header files
#include <iostream>
#include <string>
#include "billType.h"
#include "personType.h"
#include "patientType.h"
#include "doctorType.h"

using namespace std;

int main()
{
    // welcoming message to the user
    cout << "Hello, welcome to the hospital billing system. " << endl;
    // aesthetic spacing
    cout << endl;
    
    // objects of each class
    billType BT;
    personType PeT;
    patientType PaT;
    doctorType DoT;

    // variable to determine whether the user wishes to make multiple entries
    char userChoice;
    
    do
    {
        // instruction to receive input from the user
        cout << "Please enter the patient's basic personal information and fees below. " << endl;
        
        // calling all "set" functions from all classses to retrieve this information
        PaT.setID();
        PaT.setAge();
        PaT.setDOB();
        PaT.setDOA();
        PaT.setDOD();
        DoT.setfName();
        DoT.setlName();
        DoT.setSpec();
        BT.setMedChg();
        BT.setDrF();
        BT.setRmChg();
        
        // aesthetic spacing
        cout << endl;
        
        // displaying the user's information in the form of a receipt
        cout << "Here is a receipt of your last payment: " << endl;
        
        // calling all "get" functions from all classses to display this information
        cout << "Patient ID: ";
        PaT.getID();
        cout << endl;
        
        cout << "Age: ";
        PaT.getAge();
        cout << endl;
        
        cout << "Date of birth: ";
        PaT.getDOB();
        cout << endl;
        
        cout << "Date of admission: ";
        PaT.getDOA();
        cout << endl;
        
        cout << "Date of discharge: ";
        PaT.getDOD();
        cout << endl;
        
        cout << "Attending physician: ";
        DoT.getfName();
        cout << " ";
        DoT.getlName();
        cout<< endl;
        
        cout << "Doctor speciality: ";
        DoT.getSpec();
        cout << endl;
       
        cout << "Medicine charges: ";
        BT.getMedChg();
        cout << endl;
        
        cout << "Doctor fee: ";
        BT.getDrF();
        cout << endl;
        
        cout << "Room charges: ";
        BT.getRmChg();
        cout << endl;
        
        // aesthetic spacing
        cout << endl;
        
        // asking user if they wish to enter another set of informaion
        do
        {
            cout << "Would you like to make another patient entry? (y/n) " << endl;
            cin >> userChoice;
            // aesthetic spacing
            cout << endl;

        } while (userChoice != 'y' && userChoice != 'n'); // data sanitization
        
    } while (userChoice == 'y'); // continues process if the user wants to continue (types in y)
    
    // closing message
    cout << "Thank you! Have a good day!" << endl;
    
    return 0;
}
