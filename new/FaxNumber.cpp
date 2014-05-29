/*
 * FaxNumber.cpp
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */

#include "FaxNumber.h"
#include "NumberColumn.h"
#include <array>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

FaxNumber::FaxNumber(string faxNumber) {
	this->splitCount = 0;
	this->row1.resize(9);
	this->row2.resize(9);
	this->row3.resize(9);
	this->splitFaxNumber(faxNumber);
}

FaxNumber::~FaxNumber() {
}

void FaxNumber::splitFaxNumber(string faxNumber){
	while(splitCount < 27){
		if(splitCount < 9){
			this->row1.at(this->splitCount % 9) = faxNumber.substr(0,3);
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
		else if(splitCount >= 9 && splitCount < 18 ){
			this->row2.at(this->splitCount % 9) = faxNumber.substr(0,3);
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
		else{
			this->row3.at(this->splitCount % 9) = faxNumber.substr(0,3);
			this->splitCount++;
			this->splitFaxNumber(faxNumber.substr(3,faxNumber.length() - 1));
		}
	}
};

int FaxNumber::faxToNumber(){
	int accountNumber = 0;
	NumberColumn nc1(this->row1.at(0), this->row2.at(0), this->row3.at(0));
	NumberColumn nc2(this->row1.at(1), this->row2.at(1), this->row3.at(1));
	NumberColumn nc3(this->row1.at(2), this->row2.at(2), this->row3.at(2));
	NumberColumn nc4(this->row1.at(3), this->row2.at(3), this->row3.at(3));
	NumberColumn nc5(this->row1.at(4), this->row2.at(4), this->row3.at(4));
	NumberColumn nc6(this->row1.at(5), this->row2.at(5), this->row3.at(5));
	NumberColumn nc7(this->row1.at(6), this->row2.at(6), this->row3.at(6));
	NumberColumn nc8(this->row1.at(7), this->row2.at(7), this->row3.at(7));
	NumberColumn nc9(this->row1.at(8), this->row2.at(8), this->row3.at(8));
	nc1.updatePossibilities();
	nc2.updatePossibilities();
	nc3.updatePossibilities();
	nc4.updatePossibilities();
	nc5.updatePossibilities();
	nc6.updatePossibilities();
	nc7.updatePossibilities();
	nc8.updatePossibilities();
	nc9.updatePossibilities();

	accountNumber += (nc1.possibleNumbers.at(0) * 100000000);
	accountNumber += (nc2.possibleNumbers.at(0) * 10000000);
	accountNumber += (nc3.possibleNumbers.at(0) * 1000000);
	accountNumber += (nc4.possibleNumbers.at(0) * 100000);
	accountNumber += (nc5.possibleNumbers.at(0) * 10000);
	accountNumber += (nc6.possibleNumbers.at(0) * 1000);
	accountNumber += (nc7.possibleNumbers.at(0) * 100);
	accountNumber += (nc8.possibleNumbers.at(0) * 10);
	accountNumber += (nc9.possibleNumbers.at(0));

	return accountNumber;
}
