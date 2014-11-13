//============================================================================
// Name        : Lab5.cpp
// Author      : MH
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>
#include <iomanip>
#include <cstdlib>
using namespace std;
#include "myfuncts.h"

int main(int argc, char**argv) {

    int QueueSize;
    int option;
    string line;

    cout << "Enter the maximum size for the patient register: ";

    cin >> QueueSize;

    PatientRegister myRegister; //Call your Register here
    PatientData myPatient; //Call your Patient class

    do {

    cout << "[Obsterical Triage Patient Register]" << endl;

    cout << "Please select an option below:" << endl;

    cout << "1. Add Patient\n2. Examine Patient\n3. Display next Patient\n4. Display All Patients\n5. Quit\n" << endl;

    cin >> option; // 1 to 5

    //use a switch case to allow user to cycle through the options
    switch (option)
    {
    case 1:
        if (option == 1){
            myRegister.AddPatient(line,myPatient); //error
        }
        break;
    case 2:
    	if (option == 2){
    		myRegister.ExaminePatient(myPatient);
    	}
		break;
    case 3:
    	if (option == 3){
        	cout << "[Show First Patient in Queue]" << endl;
        	cout << "First Name" <<"   "<< "Last Name" <<"   "<< "Health Card #" <<"   "<< "Bed Number" <<"  "<< "Contraction Rate" <<"  "<< "Cervix Dilation" <<"  "<< "Condition" << endl;
        	cout <<myRegister.PatQueue.front().firstname<<"  "<<myRegister.PatQueue.front().lastname<<"  "<<myRegister.PatQueue.front().healthcard<<"  "<<myRegister.PatQueue.front().bednumber<<"  "<<myRegister.PatQueue.front().contraction<<"  "<<myRegister.PatQueue.front().dilation<<"  "<<endl;
        	//cout << myRegister.PatQueue.front();
    	}
    	break;
    case 4:
    	if (option == 4){
    		myRegister.DisplayPatients(myPatient);
    	}
    	break;
    case 5:
    	if (option == 5){
    		cout << "Program Ended" << endl;
    	}
    	break;
    default:
    	cout << "Invalid Key Entered (1 to 5)" << endl;
    }
    } while (option != 5);


    return 0;
}

