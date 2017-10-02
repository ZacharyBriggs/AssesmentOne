#include "String.h"
#include <iostream>
int main()
{
	String a = String("Zach");
	std::cout << a.GetLength() << std::endl;
	std::cout << a.AccessIndex(1) << std::endl;
	system("pause");
}