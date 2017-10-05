#include "Player.h"

Player::Player()
{
	mPosition = new Point2D();
	mHealth = 100;
	mName = "Adventurer";
}
Player::Player(char * name)
{
	mName = name;
}
void Player::Move(char direction)
{
	if (direction == 'w')
		*mPosition += *new Point2D(0, 1);
	if (direction == 's')
		*mPosition += *new Point2D(0,- 1);
	if (direction == 'a')
		*mPosition += *new Point2D(-1, 0);
	if (direction == 'd')
		*mPosition += *new Point2D(1, 0);
}
void Player::SetPosition(Point2D* pos)
{
	mPosition = pos;
}
Point2D Player::GetPosition()
{
	return *mPosition;
}