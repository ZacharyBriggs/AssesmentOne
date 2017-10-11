#pragma once
#include "Player.h"
class Dungeon
{
private:
	Point2D* mRooms;
	int mNumCols;
	int mNumRows;
public:
	Dungeon();
	Dungeon(int rows, int cols);
	bool CheckPlayerPosition(Player *player);
	/*Prototype: bool CheckPlayerPosition();
	Description: Checks a players position and returns true if the player
	is outside the dungeon limitations otherwise it returns false.
	Arguments: None.
	Precondition: None.
	Postcondition: True/False is returned.
	Protection: Public.
	*/
	void PrintRooms();
	/*Prototype: void PrintRooms();
	Description: Prints out each individual room in a dungeon.
	Arguments: None.
	Precondition: None.
	Postcondition: Each room is printed.
	Protection: Public.
	*/
	void GenRooms();
	/*Prototype: void GenRooms();
	Description: Generates the rooms of a dungeon.
	Arguments: None.
	Precondition: None.
	Postcondition: A new dungeon is generated.
	Protection: Public.
	*/
};