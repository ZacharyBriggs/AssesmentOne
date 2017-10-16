#include "Wumpus.h"
#include "Point2D.h"
Wumpus::Wumpus()
{
	mPosition = new Point2D(2, 1);
}
Wumpus::~Wumpus()
{
}
void Wumpus::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Wumpus::GetPosition()
{
	return *mPosition;
}
bool Wumpus::CheckForPlayer(Player* player)
{
	if (player->GetPosition() == *mPosition)
	{
		return true;
	}
	return false;
}
bool Wumpus::IsPlayerNearby(Player* player)
{
	//Checks the positions above and below the Entity for the player
	for (int i = -1; i < 2; i+=2)
	{
		if (((GetPosition() + Point2D(0, i)) == player->GetPosition()))
		{
			return true;
		}
	}
	//Checks the positions to the left and right of the Entity for the player
	for (int j = -1; j < 2; j += 2)
	{
		if ((GetPosition() + Point2D(j, 0)) == player->GetPosition())
		{
			return true;
		}
	}
	return false;
}