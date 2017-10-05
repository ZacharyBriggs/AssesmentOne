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
public:
	Dungeon();
	Dungeon(Player* player, int rows, int cols);
	bool CheckPlayerPosition();
	void PrintRooms();
};