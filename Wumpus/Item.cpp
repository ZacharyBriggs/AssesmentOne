#include "Item.h"
Item::Item()
{
	mPosition = new Point2D(4, 4);
}
Item::~Item()
{
	delete mPosition;
}
Item::Item(Point2D *pos)
{
	 mPosition = pos;
}
Point2D Item::GetPosition()
{
	return *mPosition;
}
bool Item::CheckForPlayer(Entity * dude)
{
	if (dude->GetPosition() == *mPosition)
	{
		return true;
	}
	return false;
}
bool Item::IsPlayerNearby(Entity * dude)
{
	for (int i = -1; i < 2; i += 2)
	{
		if ((GetPosition() + Point2D(0, i)) == dude->GetPosition())
			return true;
	}
	for (int j = -1; j < 2; j += 2)
	{
		if ((GetPosition() + Point2D(j, 0)) == dude->GetPosition())
			return true;
	}
	return false;
}
