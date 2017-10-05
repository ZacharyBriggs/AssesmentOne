#pragma once
#include "Point2D.h"
class Player
{
private:
	Point2D* mPosition;
	int mHealth;
	char* mName;
public:
	Player();
	Player(char* name);
	void Move(char direction);
	void SetPosition(Point2D* pos);
	Point2D GetPosition();
};
