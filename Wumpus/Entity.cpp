#include "Entity.h"
Entity::Entity()
{
	mPosition = new Point2D();
	mHealth = 0;
	mName = "";
}
Entity::Entity(char * name)
{
	mName = name;
}
void Entity::Move(char direction)
{
	if (direction == 'w')
		*mPosition += *new Point2D(-1, 0);
	if (direction == 's')
		*mPosition += *new Point2D(1,0);
	if (direction == 'a')
		*mPosition += *new Point2D(0, -1);
	if (direction == 'd')
		*mPosition += *new Point2D(0, 1);
}
void Entity::SetPosition(Point2D* pos)
{
	mPosition = pos;
}
Point2D Entity::GetPosition()
{
	return *mPosition;
}