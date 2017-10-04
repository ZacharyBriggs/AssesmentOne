#include "String.h"
#include <iostream>
#include <fstream>
int successfulTest(int testNumber, std::fstream &file);
int main()
{
	std::fstream file;
	String a = String("Zach");
	String b = String("Blambo");
	String c = String("am");
	a.UpperString();
	a.AppendString(b);
	int tests = 1;
	file.open("test.txt", std::ios_base::out | std::ios_base::app);
	file << "Test 1: Length of String.\n";
	if (a.GetLength() == 4)
		tests = successfulTest(tests, file);
	file << "Test 2: Specific Index.\n";
	if (a.AccessIndex(1) == 'a')
		tests = successfulTest(tests, file);
	file << "Test 3: Uppercasing an entire string.\n";
	if (a.UpperString() == "ZACH")
		tests = successfulTest(tests, file);
	file << "Test 4: Lowercasing an entire string.\n";
	if (a.LowerString() == "zach")
		tests = successfulTest(tests, file);
	file << "Test 5: Finding a substring.\n";
	if (b.FindSubString(c) == true)
		tests = successfulTest(tests, file);
	file << "Test 6: Finding a substring from a specific index.\n";
	if (a.FindSubString(2, c) == false)
		tests = successfulTest(tests, file);
	file << "Test 7: Appending a string.\n";
	if (a.AppendString(b) == "ZachBlambo")
		tests = successfulTest(tests, file);
	file << "Test 8: Prepending a string.\n";
	if (a.PrependString(b) == "BlamboZach")
		tests = successfulTest(tests, file);
	file << "Test 9: Replacing a substring with another substring.\n";
	if (b.ReplaceSubString(c, a) == "BlZachbo")
		tests = successfulTest(tests, file);
	file << "Test 10: Returning string as const char*.\n";
	if (c.ConstantString() == "am")
		tests = successfulTest(tests, file);
	file << "Test 11: Overloading == operator.\n";
	if(a == b == false)
		tests = successfulTest(tests, file);
	file << tests << "/11 tests successful.\n";
}
int successfulTest(int testNumber, std::fstream &file)
{
	file << "Test " << testNumber << " Successful.\n";
	testNumber++;
	return testNumber;
}
