#pragma once
#include "Player.h"
class Wumpus : public Entity
{
public:
	Wumpus();
	/*Prototype: Wumpus Wumpus();
	Description: A Wumpus with default mPosition is opened.
	Arguments: None.
	Precondition: None.
	Postcondition: A default Wumpus is created.
	Protection: Public.*/
	~Wumpus();
	/*Prototype: Wumpus ~Wumpus();
	Description: A Wumpus is deleted.
	Arguments: None.
	Precondition: A Wumpus is created.
	Postcondition: The Wumpus is now deleted.
	Protection: Public.*/
	void SetPosition(Point2D* pos);
	/*Prototype: void SetPosition(Point2D* pos);
	Description: Changes the Wumpus' mPosition to the value passed in.
	Arguments: A Point2D representing the new mPosition.
	Precondition: None
	Postcondition: Wumpus' mPosition is changed to the value passed in.
	Protection: Public.*/
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the Wumpus' mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: The Wumpus' mPosition is returned.
	Protection: Public.*/
	bool CheckForPlayer(Player* player);
	/*Prototype: bool CheckForPlayer(Player* player);
	Description: Checks to see if the player is occupying the same position as this entity.
	Arguments: The player.
	Precondition: None.
	Postcondition: Returns true if the player is occupying the same space. Returns false
	if they aren't.
	Protection: Public.*/
	bool IsPlayerNearby(Player* player);
	/*Prototype: bool IsPlayerNearby(Player* player);
	Description: Checks to see if the player is in an adjacent position.
	Arguments: The player.
	Precondition: None
	Postcondition: Returns true if the player is occupying an adjacent position. Returns
	false if they aren't.
	Protection: Public.*/
};