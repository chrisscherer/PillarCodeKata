/*
 * Reader.cpp
 *
 *  Created on: May 27, 2014
 *      Author: christopherscherer
 */

#include "Reader.h"
#include "FaxNumber.h"
#include <string>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

Reader::Reader() {
}

Reader::~Reader() {
}

bool Reader::inputIsValid(string faxNumber){

	if (string::npos != faxNumber.find_first_of("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") || faxNumber.length() != 108)
	{
	  return false;
	}
	return true;
};

int Reader::processNumber(string faxNumber){
	if(inputIsValid(faxNumber) == false) return -1;

	FaxNumber fNum(faxNumber);

	return fNum.faxToNumber();
}
