#include "Wumpus.h"
Wumpus::Wumpus()
{
	mPosition = new Point2D(4, 3);
	mHealth = 1000000;
	mName = "The Wumpus";
}
void Wumpus::Move(char direction)
{
	Entity::Move(direction);
}
void Wumpus::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Wumpus::GetPosition()
{
	return *mPosition;
}
bool Wumpus::CheckForPlayer(Player* dude)
{
	/*if (dude->GetPosition == *mPosition)
	{
		return true;
	}*/
	return false;
}
