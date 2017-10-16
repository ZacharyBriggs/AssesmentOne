#pragma once
#include "Entity.h"
class Item : public Entity
{
public:
	Item();
	/*Prototype: Item Item();
	Description: An item with a default mPosition is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A default Item is created.
	Protection: Public.
	*/
	~Item();
	Item(Point2D *pos);
	/*Prototype: Dungeon Dungeon();
	Description: An Item with a custom mPosition is created.
	Arguments: None.
	Precondition: None.
	Postcondition: A custom Item is created.
	Protection: Public.
	*/
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the Item's mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: Item's mPosition is returned.
	Protection: Public
	*/
	bool CheckForPlayer(Entity* dude);
	/*Prototype: bool CheckForPlayer(Entity* dude);
	Description: Checks to see an Entity is occupying the same position as the Item.
	Arguments: An entity.
	Precondition: None.
	Postcondition: Returns true if an Entity is occupying the same space. Returns false
	if it isn't.
	Protection: Public
	*/
	bool IsPlayerNearby(Entity* dude);
	/*Prototype: bool IsPlayerNearby(Entity* dude);
	Description: Checks to see if an Entity is in an adjacent position.
	Arguments: The player.
	Precondition: None
	Postcondition: Returns true if an Entity is occupying an adjacent position. Returns
	false if they aren't.
	Protection: Public
	*/
};
