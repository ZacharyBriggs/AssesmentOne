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
	/*Prototype: Dungeon Dungeon();
	Description: Initilizes a dungeon with default mRooms,mNumCols, and mNumRows.
	Arguments: None.
	Precondition: None.
	Postcondition: A dungeon with default values is created.
	Protection: Public.*/
	~Dungeon();
	/*Prototype: Dungeon ~Dungeon();
	Description: Deletes a Dungeon and all the variables within.
	Arguments: None.
	Precondition: A dungeon is created.
	Postcondition: The dungeon is deleted.
	Protection: Public.*/
	Dungeon(int rows, int cols);
	/*Prototype: Dungeon Dungeon(int rows, int cols);
	Description: Initilizes a dungeon with default mRooms, but mNumCols and mNumrows
	are initilized with the values passed in.
	Arguments: None.
	Precondition: None.
	Postcondition: A dungeon with custom mNumRows and mNumCols is created.
	Protection: Public.*/
	bool CheckPlayerPosition(Player *player);
	/*Prototype: bool CheckPlayerPosition();
	Description: Checks each individual position inside of a dungeon and if they player
	isn't at any of the positions, false is returned.If the player is found then true is
	returned.
	Arguments: None.
	Precondition: None.
	Postcondition: True/False is returned.
	Protection: Public.*/
	void GenRooms();
	/*Prototype: void GenRooms();
	Description: Assigns values to every room in a dungeon.
	Arguments: None.
	Precondition: None.
	Postcondition: A new dungeon is generated.
	Protection: Public.*/
	bool DungeonBorderWarning(Player* player);
	/*Prototype: void DungeonBorderWarning(Player* player);
	Description: Warns the player when they are on the border of the map.
	Arguments: A player.
	Precondition: A player is on the border of the map.
	Postcondition: Text is outputted telling the player they're on the border of the map.
	Protection: Public.*/
};