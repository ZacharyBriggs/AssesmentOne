#include "Wumpus.h"
#include "Point2D.h"
Wumpus::Wumpus()
{
	mPosition = new Point2D(4, 4);
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
	if (dude->GetPosition() == *mPosition == true)
	{
		return true;
	}
	return false;
}
bool Wumpus::IsPlayerNearby(Player* dude)
{
	for (int i = -1; i < 2; i+=2)
	{
		if ((GetPosition() + Point2D(0, i) == dude->GetPosition()))
		{
			return true;
		}
	}
	for (int j = -1; j < 2; j += 2)
	{
		if ((GetPosition() + Point2D(j, 0) == dude->GetPosition()))
		{
			return true;
		}
	}
	return false;
}
