#include "Point2D.h"
Point2D::Point2D()
{
	mX = 1;
	mY = 1;
}
Point2D::~Point2D()
{
}
Point2D::Point2D(int x, int y)
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
Point2D Point2D::operator+=(const Point2D & other)
{
	mX = mX += other.mX;
	mY = mY += other.mY;
	return Point2D();
}
Point2D Point2D::operator-=(const Point2D & other)
{
	mX = mX -= other.mX;
	mY = mY -= other.mY;
	return Point2D();
}
bool Point2D::operator==(const Point2D & other)
{
	return (mX == other.mX && mY == other.mY);
}
int Point2D::GetX()
{
	return mX;
}
int Point2D::GetY()
{
	return mY;
}