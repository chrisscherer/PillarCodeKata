/*
 * NumberColumn.cpp
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */

#include "NumberColumn.h"
#include "FaxNumber.h"
#include <array>
#include <vector>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

NumberColumn::NumberColumn(string top, string middle, string bottom) {
	this->possibleNumbers.resize(10);
	this->top = top;
	this->middle = middle;
	this->bottom = bottom;

	for(int i=0;i<10;i++){
		this->possibleNumbers.at(i) = i;
	}
}

NumberColumn::~NumberColumn() {

}

void NumberColumn::updatePossibilities(){
	if(this->top == " _ "){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
	}
	else if(this->top == "   "){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}

	if(this->middle == "  |"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}
	else if(this->middle == "|_|"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
	}
	else if(this->middle == "| |"){
		this->possibleNumbers.resize(1);
		this->possibleNumbers.at(0) = 0;
	}
	else if(this->middle == "|_ "){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}
	else if(this->middle == " _|"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}

	if(this->bottom == "|_|"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}
	else if(this->bottom == "  |"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 3), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 5), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 9), this->possibleNumbers.end());
	}
	else if(this->bottom == "|_ "){
		this->possibleNumbers.resize(1);
		this->possibleNumbers.at(0) = 2;
	}
	else if(this->bottom == " _|"){
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 0), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 1), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 2), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 4), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 6), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 7), this->possibleNumbers.end());
		this->possibleNumbers.erase(std::remove(this->possibleNumbers.begin(), this->possibleNumbers.end(), 8), this->possibleNumbers.end());
	}
}
