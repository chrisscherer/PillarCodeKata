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
	FaxNumber(string faxNumber);
	virtual ~FaxNumber();

//	string accountNumberString;

	vector<int> possibleNums;
	vector<int> accountNumber;
	vector<string> row1;
	vector<string> row2;
	vector<string> row3;

	int displayPossibilities();
	int faxToNumber();
	bool checkSum();

	void splitFaxNumber(string);


private:
	int splitCount;

	void updatePossibilities();
	void setPossibilities();
};

#endif /* FAXNUMBER_H_ */
