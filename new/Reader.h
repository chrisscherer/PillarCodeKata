/*
 * Reader.h
 *
 *  Created on: May 27, 2014
 *      Author: christopherscherer
 */
#include <string>
using namespace std;

#ifndef READER_H_
#define READER_H_

class Reader {
public:
	Reader();
	virtual ~Reader();

	int processNumber(string);
	bool inputIsValid(string);
};

#endif /* READER_H_ */
