#pragma once
#include "Entity.h"
class Wumpus : public Entity
{
public:
	Wumpus();
	void Move();
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
};