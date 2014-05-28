/*
 * MainTest.cpp
 *
 *  Created on: May 27, 2014
 *      Author: christopherscherer
 */
#include "Reader.h"

#include <CppUTest/TestHarness.h>

TEST_GROUP(Reader){
	Reader r;
};

TEST(Reader, InitialStringIsAppropriateLength) {
	CHECK(r.processNumber("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|   f||_  _|  | _||_|  ||_| _|                             ") == -1);
	CHECK(r.processNumber("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == 0);
}
TEST(Reader, ReaderChecksInputForValidCharacters) {
	CHECK(r.inputIsValid("    _  _     _  _  _  _  _  | _f _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == false);
	CHECK(r.inputIsValid("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == true);
}
