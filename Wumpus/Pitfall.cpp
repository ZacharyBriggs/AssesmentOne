#include "Pitfall.h"
Pitfall::Pitfall()
{
	mPosition = new Point2D(4, 4);
	mHealth = 1;
	mName = "Pit";
}
Pitfall::Pitfall(int posOne,int posTwo)
{
	Point2D* pos = new Point2D(posOne, posTwo);
	Entity::SetPosition(pos);
}
Point2D Pitfall::GetPosition()
{
	return *mPosition;
}
bool Pitfall::CheckForPlayer(Player * dude)
{
	if (dude->GetPosition() == *mPosition == true)
	{
		return true;
	}
	return false;
}
bool Pitfall::IsPlayerNearby(Player * dude)
{
	for (int i = -1; i < 2; i += 2)
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
