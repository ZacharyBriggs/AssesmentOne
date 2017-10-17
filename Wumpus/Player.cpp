#include "Player.h"
Player::Player()
{
	mPosition = new Point2D(4,2);
}
Player::~Player()
{
}
void Player::Move(String direction)
{
	if (String("north") == direction.LowerString() || String("w") == direction.LowerString())
	{
		*mPosition += *new Point2D(-1, 0);
		std::cout << "You head north.\n";
	}
	else if (String("south") == direction.LowerString() || String("s") == direction.LowerString())
	{
		*mPosition += *new Point2D(1, 0);
		std::cout << "You head south.\n";
	}
	else if (String("west") == direction.LowerString() || String("a") == direction.LowerString())
	{
		*mPosition += *new Point2D(0, -1);
		std::cout << "You head west.\n";
	}
	else if (String("east") == direction.LowerString() || String("d") == direction.LowerString())
	{
		*mPosition += *new Point2D(0, 1);
		std::cout << "You head east.\n";
	}
	else
		std::cout << "Invalid command.\n";
}
void Player::SetPosition(Point2D * pos)
{
	Entity::SetPosition(pos);
}
Point2D Player::GetPosition()
{
	return *mPosition;
}