/*
 * Reader.cpp
 *
 *  Created on: May 27, 2014
 *      Author: christopherscherer
 */

#include "Reader.h"
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

bool Reader::inputIsValid(string acctNum){

	if (std::string::npos != acctNum.find_first_of("0123456789abcdefghijklmnopqrstuvwxyz"))
	{
	  return false;
	}
	return true;
};

int Reader::readInput(string acctNum){
	if(inputIsValid(acctNum) == false) return -1;


	return acctNum.length();
}


