#include "String.h"
#include <iostream>
#include <fstream>
int main()
{
	std::fstream file;
	String a = String("Zach");
	String b = String("Blambo");
	String c = String("am");
	file.open("test.txt", std::ios_base::out | std::ios_base::app);
	file << "Test 1: Length of String.\n";
	a.GetLength();
	file << "Test 2: Specific Index.\n";
	a.AccessIndex(1);
	file << "Test 3: Uppercasing an entire string.\n";
	String test = a.UpperString();
	file << "Test 4: Lowercasing an entire string.\n";
	String test2 = a.LowerString();
	file << "Test 5: Finding a substring.\n";
	a.FindSubString(c);
	file << "Test 6: Finding a substring from a specific index.\n";
	a.FindSubStringFromIndex(2,c);
	file << "Test 7: Appending a string.\n";
	String test3 = a.AppendString(b);
	file << "Test 8: Prepending a string.\n";
	String test4 = a.PrependString(b);
	file << "Test 9: Replacing a substring with another substring.\n";
	String test5 = b.ReplaceSubString(c, a);
	system("pause");
}