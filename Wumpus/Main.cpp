#include "String.h"
#include "Point2D.h"
#include <iostream>
#include <fstream>
int main()
{
	Point2D test(1, 1);
	Point2D test2(2, 2);
	Point2D test3 = test * test2;
	test == test2;
	test.PrintPoint();
	test2.GetX();
	test2.GetY();
	system("pause");
}