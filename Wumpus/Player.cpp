#include "Player.h"

Player::Player()
{
	mPosition = new Point2D(4,2);
	int mHealth = 100;
	char* mName("Player");
}
void Player::Move(char direction)
{
	Entity::Move(direction);
}
void Player::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Player::GetPosition()
{
	return *mPosition;
}