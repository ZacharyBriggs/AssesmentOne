#pragma once
#include "Wumpus.h"
class Item : public Wumpus
{
public:
	Item();
	Item(int posOne,int PosTwo);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};
