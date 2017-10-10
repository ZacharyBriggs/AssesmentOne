#pragma once
#include "Entity.h"
#include "Player.h"
class Item : public Entity
{
public:
	Item();
	~Item();
	Item(Point2D *pos);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};
