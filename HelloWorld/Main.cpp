#include "String.h"
#include "Testing.h"

int main()
{
	std::fstream file;
	String a = String("Zach");
	String b = String("Blambo");
	String c = String("am");
	String d = String("Zach");
	String test3 = String("ZACH");
	String test4 = String("zach");
	String test7 = String("ZachBlambo");
	String test8 = String("BlamboZach");
	String test9 = String("BlZachbo");
	int tests = 0;
	int testsPassed = 0;
	int testsFailed = 0;
	file.open("test.txt", std::ios_base::out | std::ios_base::app);
	file << "Test 1: Length of String.\n";
	if (a.GetLength() == 4)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 2: Specific Index.\n";
	if (a.AccessIndex(1) == 'a')
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 3: Uppercasing an entire string.\n";
	String test3Half = a.UpperString();
	if(a.UpperString() == test3)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 4: Lowercasing an entire string.\n";
	if (a.LowerString() == test4)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 5: Finding a substring.\n";
	if (b.FindSubString(c) == true)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 6: Finding a substring from a specific index.\n";
	if (a.FindSubString(2, c) == false)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 7: Appending a string.\n";
	if (a.AppendString(b) == test7)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 8: Prepending a string.\n";
	if (a.PrependString(b) == test8)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 9: Replacing a substring with another substring.\n";
	if (b.ReplaceSubString(c, a) == test9)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 10: Returning string as const char*.\n";
	if (c.ConstantString() == "am")
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << "Test 11: Overloading == operator.\n";
	if(a == b == false && a == d)
		successfulTest(&tests, &testsPassed, file);
	else
		failedTest(&tests, &testsFailed, file);
	file << testsPassed << "/11 test(s) successful.\n";
	file << testsFailed << " test(s) failed.\n";
}
