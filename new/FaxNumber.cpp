/*
 * FaxNumber.cpp
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */

#include "FaxNumber.h"
#include <array>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

FaxNumber::FaxNumber() {
	this->splitCount = 0;
	this->possibleNums.resize(10);
	this->row1.resize(9);
	this->row2.resize(9);
	this->row3.resize(9);
	this->setPossibilities();
	this->possibilities();
	this->splitFaxNumber("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ");
}

FaxNumber::~FaxNumber() {

}

int FaxNumber::possibilities(){


	return 0;
}

void FaxNumber::setPossibilities(){
	for(int i=0;i<10;i++){
		this->possibleNums.at(i) = i;
	}
}

void FaxNumber::splitFaxNumber(string faxNumber){
	while(splitCount < 27){
		if(splitCount < 9){
			this->row1.at(this->splitCount % 9) = faxNumber.substr(0,3);
	//		cout << this->splitCount << this->row1.at(this->splitCount) << endl;
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
		else if(splitCount >= 9 && splitCount < 18 ){
			this->row2.at(this->splitCount % 9) = faxNumber.substr(0,3);
	//		cout << this->splitCount << this->row1.at(this->splitCount) << endl;
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
		else{
			this->row3.at(this->splitCount % 9) = faxNumber.substr(0,3);
	//		cout << this->splitCount << this->row1.at(this->splitCount) << endl;
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
	}
}
