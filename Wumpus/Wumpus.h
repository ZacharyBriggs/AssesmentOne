#pragma once
#include "Player.h"
class Wumpus : public Entity
{
public:
	Wumpus();
	void Move(char direction);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};