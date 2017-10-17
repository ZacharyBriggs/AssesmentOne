#include "Testing.h"
void successfulTest(int* testNumber,int* testsPassed, std::fstream &file)
{
	*testNumber += 1;
	*testsPassed += 1;
	file << "Test " << *testNumber << " Successful.\n";
}
void failedTest(int* testNumber,int* testsFailed, std::fstream &file)
{
	*testNumber+=1;
	*testsFailed+=1;
	file << "Test " << *testNumber << " Failed.\n";
}