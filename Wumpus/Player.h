#pragma once
#include "Entity.h"
#include "String.h"
class Player : public Entity
{
public:
	Player();
	/*Prototype: Player Player();
	Description: Creates a Player with a default mPosition.
	Arguments: None.
	Precondition: None.
	Postcondition: A player with a default mPosition is created.
	Protection: Public.*/
	~Player();
	/*Prototype: Player ~Player();
	Description: Deletes the Player.
	Arguments: None.
	Precondition: A Player is created.
	Postcondition: The Player is deleted.
	Protection: Public.*/
	void Move(String direction);
	/*Prototype: void Move(char direction);
	Description: Takes user's input and changes the Player's mPosition depending on the
	input.
	Arguments: A char representing which direction the player wants to go.
	Precondition: None
	Postcondition: The Player's mPosition is changed dependning on the input.
	Protection: Public.*/
	void SetPosition(Point2D* pos);
	/*Prototype: void SetPosition(Point2D* pos);
	Description: Changes the player's mPosition to the value passed in.
	Arguments: A Point2D representing the new mPosition.
	Precondition: None
	Postcondition: Player's mPosition is changed to the value passed in.
	Protection: Public.*/
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the Player's mPosition.
	Arguments: None.
	Precondition: None
	Postcondition: Player's mPosition is returned.
	Protection: Public.*/
};