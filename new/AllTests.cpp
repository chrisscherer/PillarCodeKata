/*
 * AllTests.cpp
 *
 *  Created on: May 27, 2014
 *      Author: christopherscherer
 */
#include <CppUTest/CommandLineTestRunner.h>
using namespace std;

int main(int ac, char** av)
{
	MemoryLeakWarningPlugin::turnOffNewDeleteOverloads();
    return CommandLineTestRunner::RunAllTests(ac, av);
}
