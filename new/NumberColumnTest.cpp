/*
 * NumberColumnTest.cpp
 *
 *  Created on: May 28, 2014
 *      Author: christopherscherer
 */
#include <iostream>
using namespace std;

#include "NumberColumn.h"

#include <CppUTest/TestHarness.h>

TEST_GROUP(NumberColumn){
		NumberColumn* nc = new NumberColumn(" _ ","|_|","|_|");
		void teardown(){
			delete nc;
		}
};
TEST_GROUP(NumberColumnZero){
	NumberColumn* ncZero = new NumberColumn(" _ ", "| |", "|_|");
	void teardown(){
		delete ncZero;
	}
};
TEST_GROUP(NumberColumnOne){
	NumberColumn* ncOne = new NumberColumn("   ", "  |", "  |");
	void teardown(){
		delete ncOne;
	}
};
TEST_GROUP(NumberColumnTwo){
	NumberColumn* ncTwo = new NumberColumn(" _ ", " _|", "|_ ");
	void teardown(){
		delete ncTwo;
	}
};
TEST_GROUP(NumberColumnThree){
	NumberColumn* ncThree = new NumberColumn(" _ ", " _|", " _|");
	void teardown(){
		delete ncThree;
	}
};
TEST_GROUP(NumberColumnFour){
	NumberColumn* ncFour = new NumberColumn("   ", "|_|", "  |");
	void teardown(){
		delete ncFour;
	}
};
TEST_GROUP(NumberColumnFive){
	NumberColumn* ncFive = new NumberColumn(" _ ", "|_ ", " _|");
	void teardown(){
		delete ncFive;
	}
};
TEST_GROUP(NumberColumnSix){
	NumberColumn* ncSix = new NumberColumn(" _ ", "|_ ", "|_|");
	void teardown(){
		delete ncSix;
	}
};
TEST_GROUP(NumberColumnSeven){
	NumberColumn* ncSeven = new NumberColumn(" _ ", "  |", "  |");
	void teardown(){
		delete ncSeven;
	}
};
TEST_GROUP(NumberColumnEight){
	NumberColumn* ncEight = new NumberColumn(" _ ", "|_|", "|_|");
	void teardown(){
		delete ncEight;
	}
};
TEST_GROUP(NumberColumnNine){
	NumberColumn* ncNine = new NumberColumn(" _ ", "|_|", " _|");

	void teardown(){
		delete ncNine;
	}
};

TEST(NumberColumn, HasATopMiddleandBottom){
	CHECK(nc->top == " _ ");
	CHECK(nc->middle == "|_|");
	CHECK(nc->bottom == "|_|")
};

TEST(NumberColumnZero, ProcessesZeroCorrectly){
	ncZero->updatePossibilities();
	CHECK(ncZero->possibleNumbers.at(0) == 0);
};

TEST(NumberColumnOne, ProcessesOneCorrectly){
	ncOne->updatePossibilities();
	CHECK(ncOne->possibleNumbers.at(0) == 1);
};

TEST(NumberColumnTwo, ProcessesTwoCorrectly){
	ncTwo->updatePossibilities();
	CHECK(ncTwo->possibleNumbers.at(0) == 2);
};

TEST(NumberColumnThree, ProcessesThreeCorrectly){
	ncThree->updatePossibilities();
	CHECK(ncThree->possibleNumbers.at(0) == 3);
};

TEST(NumberColumnFour, ProcessesFourCorrectly){
	ncFour->updatePossibilities();
	CHECK(ncFour->possibleNumbers.at(0) == 4);
};

TEST(NumberColumnFive, ProcessesFiveCorrectly){
	ncFive->updatePossibilities();
	CHECK(ncFive->possibleNumbers.at(0) == 5);
};

TEST(NumberColumnSix, ProcessesSixCorrectly){
	ncSix->updatePossibilities();
	CHECK(ncSix->possibleNumbers.at(0) == 6);
};

TEST(NumberColumnSeven, ProcessesSevenCorrectly){
	ncSeven->updatePossibilities();
	CHECK(ncSeven->possibleNumbers.at(0) == 7);
};

TEST(NumberColumnEight, ProcessesEightCorrectly){
	ncEight->updatePossibilities();
	CHECK(ncEight->possibleNumbers.at(0) == 8);
};

TEST(NumberColumnNine, ProcessesNineCorrectly){
	ncNine->updatePossibilities();
	CHECK(ncNine->possibleNumbers.at(0) == 9);
};



