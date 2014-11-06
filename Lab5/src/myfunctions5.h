/*
 * myfunctions5.h
 *
 *  Created on: Nov 6, 2014
 *      Author: mhotrada
 */
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#ifndef MYFUNCTIONS5_H_
#define MYFUNCTIONS5_H_

	enum condition { UNKNOWN, CHECKUP, RELEASE, TEST, LABOUR, ADMIT};

	class PatientData {

	private:
		condition state;
		int bednumber;
		int contraction;
		int dilation;
	public:
		string firstname;
		string lastname;
		int healthcard;
		PatientData patient1;
		~PatientData patient2;
	};

	class PatientRegister {

	public:
		int SIZE;
		PatientData PatientQueue[SIZE];
	};

#endif /* MYFUNCTIONS5_H_ */