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
	NumberColumn nc(string top, string middle,string bottom);
};

TEST(NumberColumn, HasATopMiddleandBottom){

}



