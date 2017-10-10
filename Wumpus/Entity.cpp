#include "Entity.h"
Entity::Entity()
{
	mPosition = new Point2D();
}

void Entity::SetPosition(Point2D* pos)
{
	mPosition = pos;
}
Point2D Entity::GetPosition()
{
	return *mPosition;
}