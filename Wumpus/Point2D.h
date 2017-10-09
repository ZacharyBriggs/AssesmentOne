#pragma once
#include <iostream>
class Point2D
{
private:
	int mX;
	int mY;
public:
	Point2D();
	Point2D(int x, int y);
	Point2D operator+(const Point2D & other);
	/*Prototype: Point2D operator+(const Point2D & other);
	Description: Adds two Point2D variables and returns the value.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are added and returned as a new
	temp Point2D. Neither variable is changed.
	Visibility: Public.
	*/
	Point2D operator-(const Point2D & other);
	/*Prototype: Point2D operator-(const Point2D & other);
	Description: Subtracts two Point2D variables and returns the value.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are subtracted and returned as a new
	temp Point2D. Neither variable is changed.
	Visibility: Public.
	*/
	Point2D operator*(const Point2D & other);
	/*Prototype: Point2D operator*(const Point2D & other);
	Description: Multiplays two Point2D variables and returns the value.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are multiplied and returned as a new
	temp Point2D. Neither variable is changed.
	Visibility: Public.
	*/
	Point2D operator*(int other);
	/*Prototype: Point2D operator-(float other);
	Description: Both variables in a Point2D are multiplied by one variable.
	Precondition: One Point2D variables.
	Postcondition: Both Point2D variables are multiplied by other and
	are returned as a temp value. Neither variable is changed.
	Visibility: Public.
	*/
	Point2D operator+=(const Point2D & other);
	/*Prototype: Point2D operator+=(const Point2D & other);
	Description: Adds two Point2D variables.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are added and the values of the first
	Point2D are changed.
	Visibility: Public.
	*/
	Point2D operator-=(const Point2D & other);
	/*Prototype: Point2D operator-=(const Point2D & other);
	Description: Subtracts two Point2D variables.
	Arguments: Two Point2D variables.
	Precondition: Two Point2D variables.
	Postcondition: The 2 Point2Ds are subtracted and the values of the
	first Point2D are changed.
	Visibility: Public.
	*/
	bool operator==(const Point2D & other);
	/*Prototype: bool operator==(const Point2D & other);
	Description: Returns true or false depending on if the two Point2Ds
	are equal.
	Arguments: Two Point2Ds
	Precondition: Two Point2Ds
	Postcondition: True or false is returned depending on if the Point2Ds
	are equal.
	Visibility: Public.
	*/
	friend std::ostream& operator<<(std::ostream&stream, const Point2D & a);
	/*Prototype: friend std::ostream& operator<<(std::ostream&stream, const Point2D & a);
	Description: Outputs mX and mY of a Point2D.
	Arguments: A Point2D
	Precondition: A Point2D
	Postcondition: mX and mY of a Point2D are outputted to the console.
	Visibility: Public.
	*/
	int GetX();
	/*Prototype: float GetX();
	Description: Returns mX of a Point2D.
	Arguments: A Point2D.
	Precondition: A Point2D.
	Postcondition: mX of the Point2D is returned.
	Visibility: Public.
	*/
	int GetY();
	/*Prototype: float GetY();
	Description: Returns mY of a Point2D.
	Arguments: A Point2D.
	Precondition: A Point2D.
	Postcondition: mY of the Point2D is returned.
	Visibility: Public.
	*/
};
