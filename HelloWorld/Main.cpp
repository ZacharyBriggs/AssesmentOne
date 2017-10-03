#include "String.h"
int main()
{
	String a = String("Zach");
	String b = String("Blambo");
	String c = String("ach");
	a.GetLength();
	a.AccessIndex(1);
	String test = a.UpperString();
	String test2 = a.LowerString();
	a.FindSubString(c);
	a.FindSubStringFromIndex(2,c);
	system("pause");
}