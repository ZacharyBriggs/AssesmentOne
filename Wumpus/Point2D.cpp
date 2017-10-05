#include "Point2D.h"
#include <iostream>
Point2D::Point2D()
{
	mX = 0;
	mY = 0;
}
Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}
Point2D Point2D::operator+(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX + other.mX;
	temp.mY = mY + other.mY;
	return Point2D(temp);
}
Point2D Point2D::operator-(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX - other.mX;
	temp.mY = mY - other.mY;
	return Point2D(temp);
}
Point2D Point2D::operator*(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX * other.mX;
	temp.mY = mY * other.mY;
	return Point2D(temp);
}
Point2D Point2D::operator*(float other)
{
	Point2D temp;
	temp.mX = mX * other;
	temp.mY = mY * other;
	return Point2D(temp);
}
Point2D Point2D::operator+=(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX += other.mX;
	temp.mY = mY += other.mY;
	return Point2D(temp);
}
Point2D Point2D::operator-=(const Point2D & other)
{
	Point2D temp;
	temp.mX = mX -= other.mX;
	temp.mY = mY -= other.mY;
	return Point2D(temp);
}
bool Point2D::operator==(const Point2D & other)
{
	return (mX == other.mX && mY == other.mY);
}
float Point2D::GetX()
{
	return mX;
}
float Point2D::GetY()
{
	return mY;
}
void Point2D::PrintPoint()
{
	std::cout << mX << "," << mY << std::endl;
}
