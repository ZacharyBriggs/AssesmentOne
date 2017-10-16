#include "Player.h"
Player::Player()
{
	mPosition = new Point2D(4,2);
}
void Player::Move(char direction)
{
	if (direction == 'w')
	{
		*mPosition += *new Point2D(-1, 0);
		std::cout << "You head north.\n";
	}
	if (direction == 's')
	{
		*mPosition += *new Point2D(1, 0);
		std::cout << "You head south.\n";
	}
	if (direction == 'a')
	{
		*mPosition += *new Point2D(0, -1);
		std::cout << "You head west.\n";
	}
	if (direction == 'd')
	{
		*mPosition += *new Point2D(0, 1);
		std::cout << "You head east.\n";
	}
}
void Player::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Player::GetPosition()
{
	return *mPosition;
}