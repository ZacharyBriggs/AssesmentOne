#pragma once
#include <iostream>
class Point2D
{
private:
	float mX;
	float mY;
public:
	Point2D();
	Point2D(float x, float y);
	Point2D operator+(const Point2D & other);
	Point2D operator-(const Point2D & other);
	Point2D operator*(const Point2D & other);
	Point2D operator*(float other);
	Point2D operator+=(const Point2D & other);
	Point2D operator-=(const Point2D & other);
	bool operator==(const Point2D & other);
	friend std::ostream& operator<<(std::ostream&stream, const Point2D & a);
	float GetX();
	float GetY();
	void PrintPoint();
};
