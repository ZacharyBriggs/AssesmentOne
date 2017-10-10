#pragma once
#include "Entity.h"
class Item : public Entity
{
public:
	Item();
	~Item();
	Item(Point2D *pos);
	Point2D GetPosition();
	bool CheckForPlayer(Entity* dude);
	bool IsPlayerNearby(Entity* dude);
};
