#pragma once
#include "Entity.h"
class Item : public Entity
{
public:
	Item();
	Item(Point2D *pos);
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the Item's mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: Item's mPosition is returned.
	Protection: Public
	*/
	bool CheckForPlayer(Entity* dude);
	/*Prototype: Point2D GetPosition();
	Description: Returns the Item's mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: Item's mPosition is returned.
	Protection: Public
	*/
	bool IsPlayerNearby(Entity* dude);
	/*Prototype: Point2D GetPosition();
	Description: Returns the Item's mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: Item's mPosition is returned.
	Protection: Public
	*/
};
