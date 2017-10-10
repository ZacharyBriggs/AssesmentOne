#pragma once
#include "Entity.h"
#include "Player.h"
class Wumpus : public Entity
{
public:
	Wumpus();
	~Wumpus();
	void Move(char direction);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
	bool CheckForPlayer(Player* dude);
	bool IsPlayerNearby(Player* dude);
};