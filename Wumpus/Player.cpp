#include "Player.h"

Player::Player()
{
	mPosition = new Point2D(4,2);
}
void Player::Move(char direction)
{
	if (direction == 'w')
		*mPosition += *new Point2D(-1, 0);
	if (direction == 's')
		*mPosition += *new Point2D(1, 0);
	if (direction == 'a')
		*mPosition += *new Point2D(0, -1);
	if (direction == 'd')
		*mPosition += *new Point2D(0, 1);
}
void Player::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Player::GetPosition()
{
	return *mPosition;
}