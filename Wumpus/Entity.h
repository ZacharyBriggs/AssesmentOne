#pragma once
#include "Point2D.h"
class Entity
{
protected:
	Point2D* mPosition;
public:
	Entity();
	/*Prototype: Entity Entity();
	Description: Creates an Entity with a default mPosition.
	Arguments: None.
	Precondition: None.
	Postcondition: An default Entity is created.
	Protection: Public.
	*/
	void SetPosition(Point2D* pos);
	/*Prototype: void SetPosition(Point2D* pos);
	Description: Sets the player's position to a chosen position.
	Arguments: A Point2D representing the new position.
	Precondition: None.
	Postcondition: The players mPosition is changed to the position passed in.
	Protection: Public.
	*/
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the player's mPosition.
	Arguments: None.
	Precondition: None.
	Postcondition: mPosition is returned.
	Protection: Public.
	*/
};
