#include "Point2D.h"
#include <iostream>

Point2D::Point2D()
{
	mX = 3;
	mY = 3;
}
Point2D::Point2D(float x, float y)
{
	mX = x;
	mY = y;
}

Point2D Point2D::operator+(const Point2D & other)
{
	mX += other.mX;
	mY += other.mY;
	return Point2D(mX,mY);
}

Point2D Point2D::operator-(const Point2D & other)
{
	mX -= other.mX;
	mY -= other.mY;
	return Point2D(mX,mY);
}

Point2D Point2D::operator*(const Point2D & other)
{
	mX *= other.mX;
	mY *= other.mY;
	return Point2D(mX,mY);
}

Point2D Point2D::operator*(float other)
{
	mX *= other;
	mY *= other;
	return Point2D(mX,mY);
}

bool Point2D::operator==(const Point2D & other)
{
	if (mX == other.mX && mY == other.mY)
		return true;
	else
		return false;
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
}
