#include "String.h"
int main()
{
	String a = String("Zach");
	String b;
	std::cout << a.GetLength() << std::endl;
	std::cout << a.AccessIndex(1) << std::endl;
	String test = a.UpperString();
	String test2 = a.LowerString();
	system("pause");
}