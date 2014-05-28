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
	CHECK(r.readInput("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == 108);
}
TEST(Reader, ReaderChecksInputForValidCharacters) {
	CHECK(r.inputIsValid("    _  _     _  _  _  _  _  | _f _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == false);
	CHECK(r.inputIsValid("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ") == true);
}
