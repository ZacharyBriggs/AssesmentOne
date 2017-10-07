#pragma once
#include "Point2D.h"
#include "Player.h"
class Dungeon
{
private:
	Point2D* mRooms;
	Player* mPlayer;
	int mNumCols;
	int mNumRows;
	void GenRooms();
	/*Prototype: void GenRooms();
	Description: Generates the rooms of a dungeon.
	Arguments: None.
	Precondition: None.
	Postcondition: A new dungeon is generated.
	Visibility: Private.
	*/
public:
	Dungeon();
	Dungeon(Player* player, int rows, int cols);
	bool CheckPlayerPosition();
	/*Prototype: bool CheckPlayerPosition();
	Description: Checks a players position and returns true if the player
	is outside the dungeon limitations otherwise it returns false.
	Arguments: None.
	Precondition: None.
	Postcondition: True/False is returned.
	Visibility: Public.
	*/
	void PrintRooms();
	/*Prototype: void PrintRooms();
	Description: Prints out each individual room in a dungeon.
	Arguments: None.
	Precondition: None.
	Postcondition: Each room is printed.
	Visibility: Public.
	*/
};