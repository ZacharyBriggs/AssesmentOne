#pragma once
#include "Entity.h"
#include "Player.h"
#include "Point2D.h"
class Wumpus : public Entity
{
public:
	Wumpus();
	void Move(char direction);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
};