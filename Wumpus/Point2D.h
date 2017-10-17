#pragma once
#include <iostream>
class Point2D
{
private:
	int mX;
	int mY;
public:
	Point2D();
	/*Prototype: Point2D Point2D();
	Description: A Point2D with default mX and mY is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A default Point2D is created.
	Protection: Public.*/
	~Point2D();
	/*Prototype: Point2D ~Point2D();
	Description: A Point2D is deleted.
	Arguments: None.
	Precondition: A Point2D is created.
	Postcondition: The Point2D is deleted.
	Protection: Public.*/
	Point2D(int x, int y);
	/*Prototype: Point2D Point2d(int x, int y);
	Description: A Point2D with custom mX and mY is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A custom Point2D is created.
	Protection: Public.*/
	Point2D operator+(const Point2D & other);
	/*Prototype: Point2D operator+(const Point2D & other);
	Description: Adds two Point2D variables and returns the value.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are added and returned as a new
	temp Point2D. Neither variable is changed.
	Visibility: Public.*/
	Point2D operator-(const Point2D & other);
	/*Prototype: Point2D operator-(const Point2D & other);
	Description: Subtracts two Point2D variables and returns the value.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are subtracted and returned as a new
	temp Point2D. Neither variable is changed.
	Visibility: Public.*/
	Point2D operator+=(const Point2D & other);
	/*Prototype: Point2D operator+=(const Point2D & other);
	Description: Adds two Point2D variables.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are added and the values of the first
	Point2D are changed.
	Visibility: Public.*/
	Point2D operator-=(const Point2D & other);
	/*Prototype: Point2D operator-=(const Point2D & other);
	Description: Subtracts two Point2D variables.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are subtracted and the values of the
	first Point2D are changed.
	Visibility: Public.*/
	bool operator==(const Point2D & other);
	/*Prototype: bool operator==(const Point2D & other);
	Description: Returns true or false depending on if the two Point2Ds
	are equal.
	Arguments: Two Point2Ds
	Precondition: Two Point2Ds
	Postcondition: True or false is returned depending on if the Point2Ds
	are equal.
	Visibility: Public.*/
	int GetX();
	/*Prototype: float GetX();
	Description: Returns mX of a Point2D.
	Arguments: A Point2D.
	Precondition: A Point2D.
	Postcondition: mX of the Point2D is returned.
	Visibility: Public.*/
	int GetY();
	/*Prototype: float GetY();
	Description: Returns mY of a Point2D.
	Arguments: A Point2D.
	Precondition: A Point2D.
	Postcondition: mY of the Point2D is returned.
	Visibility: Public.*/
};
