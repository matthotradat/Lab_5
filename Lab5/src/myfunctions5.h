/*
 * myfunctions5.h
 *
 *  Created on: Nov 6, 2014
 *      Author: mhotrada
 */
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <queue>
#include <iomanip>
#include <cstdlib>
using namespace std;

#ifndef MYFUNCTIONS5_H_
#define MYFUNCTIONS5_H_

    enum condition { UNKNOWN, CHECKUP, RELEASE, LABOUR, ADMIT};

    class PatientData {

    public:
        condition state;
        int bednumber;
        int contraction;
        int dilation;

        string firstname;
        string lastname;
        int healthcard;
        PatientData();
        ~PatientData();

    };

    class PatientRegister {

    public:
        int size;
        queue<PatientData> PatQueue;


        void AddPatient (string line, PatientData Patient){

            cin.ignore();
            getline(cin,line); //get line from user

            //create stringstream object
            stringstream str(line);

            str >> Patient.firstname;
            str >> Patient.lastname;
            str >> Patient.healthcard;

            PatQueue.push(Patient);
        }

        void ExaminePatient(PatientData Patient){

            if (Patient.state == UNKNOWN){
                Patient.state = static_cast<condition>(rand() % 5);
                PatQueue.front() = PatQueue.back();
            }
            else if (Patient.state == LABOUR){
                cout << "Please enter the cervical dilation: ";
                cin >> Patient.dilation;
                cout << "Please enter the contraction rate: ";
                cin >> Patient.contraction;
                //PatQueue.back() = PatQueue.front();
                PatientData temp = PatQueue.front();
                PatQueue.pop();
                PatQueue.push(temp);
            }
            else if (Patient.state == CHECKUP){
                Patient.dilation = 0;
                PatientData temp1 = PatQueue.front();
                PatQueue.pop();
                PatQueue.push(temp1);
            }
            else if ((Patient.state == LABOUR) && (Patient.dilation >= 4) && (Patient.contraction < 4)){
                Patient.state = ADMIT;
                PatQueue.pop();
            }
            else if (Patient.state == ADMIT){
                cout << "Here are the Patient's Details:" << endl;
                //cout << PatQueue.front(); //error
                cout << "\nThe Patient has been admitted to birthing unit.";
                PatQueue.pop();
            }
            else if (Patient.state == RELEASE){
                //cout << PatQueue.front(); //error
                PatQueue.pop();
                //DISPLAY the Patient
            }
        }
        void DisplayPatients(PatientData Patient){

        	cout << "[Show All Patients in Queue]" << endl;
        	cout << "First Name" <<"   "<< "Last Name" <<"   "<< "Health Card #" <<"   "<< "Bed Number" <<"  "<< "Contraction Rate" <<"  "<< "Cervix Dilation" <<"  "<< "Condition" << endl;

        	while (!PatQueue.empty()) {

            cout <<PatQueue.front().firstname<<"  "<<PatQueue.front().lastname<<"  "<<PatQueue.front().healthcard<<"  "<<PatQueue.front().bednumber<<"  "<<PatQueue.front().contraction<<"  "<<PatQueue.front().dilation<<"  "<<endl;
            //Need to include some logic if you want to display enum condition
            PatQueue.pop();
            }
        }
        PatientRegister();
        ~PatientRegister();

    };

#endif /* MYFUNCTIONS5_H_ */
