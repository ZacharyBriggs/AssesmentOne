#pragma once
#include "Point2D.h"
class Entity
{
protected:
	Point2D* mPosition;
	int mHealth;
	char* mName;
public:
	Entity();
	Entity(char* name);
	void Move(char direction);
	/*Prototype: void Move(char direction);
	Description: Allows a player to move in 4 directions.
	Arguments: The direction the player wishes to move
	Precondition: None.
	Postcondition: The player's position is changed by 1 depending on which direction they chose.
	Visibility: Public.
	*/
	void SetPosition(Point2D* pos);
	/*Prototype: void SetPosition(Point2D* pos);
	Description: Sets the player's position to a chosen position.
	Arguments: A Point2D representing the new position.
	Precondition: None.
	Postcondition: The players mPosition is changed to the position passed in.
	Visibility: Public.
	*/
	Point2D GetPosition();
	/*Prototype: Point2D GetPosition();
	Description: Returns the player's mPosition.
	Arguments: None.
	Precondition: None.
	Postcondition: mPosition is returned.
	Visibility: Public.
	*/
};
