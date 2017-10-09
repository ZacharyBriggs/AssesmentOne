#include "Wumpus.h"

Wumpus::Wumpus()
{
	mPosition = new Point2D(2, 3);
	int mHealth = 1000000;
	char* mName("The Wumpus");
}

void Wumpus::Move()
{
	/*int direction = ;
	if (direction == 'w')
		*mPosition += *new Point2D(0, 1);
	if (direction == 's')
		*mPosition += *new Point2D(0, -1);
	if (direction == 'a')
		*mPosition += *new Point2D(-1, 0);
	if (direction == 'd')
		*mPosition += *new Point2D(1, 0);*/
}
void Wumpus::SetPosition(Point2D * pos)
{
	mPosition = pos;
}
Point2D Wumpus::GetPosition()
{
	return *mPosition;
}