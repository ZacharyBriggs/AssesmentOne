#pragma once
#include "Wumpus.h"
class Pitfall : public Wumpus
{
public:
	Pitfall();
	Pitfall(int posOne,int PosTwo);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};
