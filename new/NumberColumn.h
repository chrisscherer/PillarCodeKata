/*
 * NumberColumn.h
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */
#include <string>
#include <array>
#include <vector>
using namespace std;

#ifndef NUMBERCOLUMN_H_
#define NUMBERCOLUMN_H_

class NumberColumn {
public:
	NumberColumn(string top, string middle, string bottom);
	virtual ~NumberColumn();

	vector<int> possibleNumbers;
	string top;
	string middle;
	string bottom;

	void updatePossibilities();

};

#endif /* NUMBERCOLUMN_H_ */
