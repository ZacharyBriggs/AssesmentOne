#include "Item.h"
Item::Item()
{
	mPosition = new Point2D(4, 4);
}
Item::~Item()
{
}
Item::Item(Point2D *pos)
{
	 mPosition = pos;
}
Point2D Item::GetPosition()
{
	return *mPosition;
}
bool Item::CheckForPlayer(Entity * entity)
{
	if (entity->GetPosition() == *mPosition)
	{
		return true;
	}
	return false;
}
bool Item::IsPlayerNearby(Entity * entity)
{
	//Checks the positions above and below the Entity for the player
	for (int i = -1; i < 2; i += 2)
	{
		if ((GetPosition() + Point2D(0, i)) == entity->GetPosition())
			return true;
	}
	//Checks the positions to the left and right of the Entity for the player
	for (int j = -1; j < 2; j += 2)
	{
		if ((GetPosition() + Point2D(j, 0)) == entity->GetPosition())
			return true;
	}
	return false;
}
