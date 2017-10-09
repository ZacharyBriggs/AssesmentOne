#pragma once
#include "Wumpus.h"
class Pitfall : public Wumpus
{
	Pitfall();
	Pitfall(Point2D* pos);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};
