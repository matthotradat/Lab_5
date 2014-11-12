//============================================================================
// Name        : Lab5.cpp
// Author      : MH
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <queue>
#include <iomanip>
using namespace std;
#include "myfuncts.h"

int main(int argc, char* argv[]) {

	//int count=0;

	int option;
	string line;

	PatientRegister myRegister(); //Call your Register here
	PatientData myPatient(); //Call your Patient class

	do {

	cout << "[Obsterical Triage Patient Register]" << endl;

	cout << "Please select an option below:" << endl;

	cout << "1. Add Patient\n2. Examine Patient\n3. Display Patients in Queue\n4. Display next Patient\n5. Quit\n" << endl;

	cin >> option;

	//use a switch case to allow user to cycle through the options
	switch (option)
	{
	case 1:
		if (option == 1){
			//myRegister.AddPatient(line,myPatient); //error
		}
	}
	} while (option != 5);

	return 0;
}
