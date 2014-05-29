/*
 * FaxNumberTest.cpp
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */
#include <iostream>
using namespace std;

#include "FaxNumber.h"

#include <CppUTest/TestHarness.h>

TEST_GROUP(FaxNumberRows){
	string hold = "    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ";

	//This next declaration is apparently causing memory leaks, but I can't find another way to create a new instance of the class
	//and also assign it it's initial string
	FaxNumber* fNum = new FaxNumber(hold);
	void teardown(){
		delete fNum;
	}
};
TEST_GROUP(FaxNumberToAccountNumber){
	string allNums = "    _  _     _  _  _  _  _   | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                           ";
	FaxNumber* fNum = new FaxNumber(allNums);
	void teardown(){
		delete fNum;
	}
};

TEST(FaxNumberRows, InitialSizeOfRowsIsNine){
	CHECK(fNum->row1.size() == 9);
	CHECK(fNum->row2.size() == 9);
	CHECK(fNum->row3.size() == 9);
};
TEST(FaxNumberRows, getRowsSplitsFaxNumberProperly){
	fNum->splitFaxNumber("    _  _     _  _  _  _  _  | _| _||_||_ |_   ||_||_|  ||_  _|  | _||_|  ||_| _|                            ");
	CHECK(fNum->row1.at(0) == "   ");
	CHECK(fNum->row1.at(1) == " _ ");
	CHECK(fNum->row1.at(2) == " _ ");
	CHECK(fNum->row1.at(3) == "   ");
	CHECK(fNum->row1.at(4) == " _ ");
	CHECK(fNum->row1.at(5) == " _ ");
	CHECK(fNum->row1.at(6) == " _ ");
	CHECK(fNum->row1.at(7) == " _ ");
	CHECK(fNum->row1.at(8) == " _ ");

	CHECK(fNum->row2.at(0) == " | ");
	CHECK(fNum->row2.at(1) == "_| ");
	CHECK(fNum->row2.at(2) == "_||");
	CHECK(fNum->row2.at(3) == "_||");
	CHECK(fNum->row2.at(4) == "_ |");
	CHECK(fNum->row2.at(5) == "_  ");
	CHECK(fNum->row2.at(6) == " ||");
	CHECK(fNum->row2.at(7) == "_||");
	CHECK(fNum->row2.at(8) == "_| ");

	CHECK(fNum->row3.at(0) == " ||");
	CHECK(fNum->row3.at(1) == "_  ");
	CHECK(fNum->row3.at(2) == "_| ");
	CHECK(fNum->row3.at(3) == " | ");
	CHECK(fNum->row3.at(4) == "_||");
	CHECK(fNum->row3.at(5) == "_| ");
	CHECK(fNum->row3.at(6) == " ||");
	CHECK(fNum->row3.at(7) == "_| ");
	CHECK(fNum->row3.at(8) == "_| ");
};

TEST(FaxNumberToAccountNumber, ProcessesAllNumbersCorrectly){
	CHECK(fNum->faxToNumber() == 123456789);
};


