#pragma once
#include "Entity.h"
class Player : public Entity
{
public:
	Player();
	void Move(char direction);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
};