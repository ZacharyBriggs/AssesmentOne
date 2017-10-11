#pragma once
#include "String.h"
#include <fstream>
void successfulTest(int* testNumber,int* testsPassed, std::fstream &file);
/*Prototype: void successfulTest(int* testNumber,int* testsPassed, std::fstream &file);
Description: Increments testNumber and testsPassed if the test was successful.
Arguments: Two ints representing the number of tests that have happened and how many
were passed
Precondition: None.
Postcondition: testNumber and testPassed are incremented and the text saying the test was
successful is outputted into the text file.
Visibility: Public.
*/
void failedTest(int* testNumber, int* testsFailed, std::fstream &file);
/*Prototype: void failedTest(int* testNumber, int* testsFailed, std::fstream &file);
Description: Increments testNumber and testFailed if the test was failed.
Arguments: None.
Precondition: None.
Postcondition: testNumber and testsFailed are incremented and the text saying the test was
failed is outputted into the text file.
Visibility: Public.
*/