/*
 * FaxNumber.h
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */
#include <string>
#include <array>
#include <vector>
using namespace std;

#ifndef FAXNUMBER_H_
#define FAXNUMBER_H_

class FaxNumber {
public:
	FaxNumber();
	virtual ~FaxNumber();

	vector<int> possibleNums;
	vector<string> row1;
	vector<string> row2;
	vector<string> row3;

	int splitCount;

	int possibilities();
	void setPossibilities();
	void splitFaxNumber(string);
};

#endif /* FAXNUMBER_H_ */
