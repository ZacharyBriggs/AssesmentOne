#pragma once
#include "String.h"
#include <fstream>
void successfulTest(int* testNumber,int* testsPassed, std::fstream &file);
void failedTest(int* testNumber, int* testsFailed, std::fstream &file);