#include "String.h"
int main()
{
	String a = String("Zach");
	String b = String("Blambo");
	String c = String("am");
	a.GetLength();
	a.AccessIndex(1);
	String test = a.UpperString();
	String test2 = a.LowerString();
	a.FindSubString(c);
	a.FindSubStringFromIndex(2,c);
	String test3 = a.AppendString(b);
	String test4 = a.PrependString(b);
	String test5 = b.ReplaceSubString(c, a);
	system("pause");
}