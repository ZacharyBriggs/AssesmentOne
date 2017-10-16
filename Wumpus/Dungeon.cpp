#include "Dungeon.h"
Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mNumCols = 5;
	mNumRows = 5;
}
Dungeon::~Dungeon()
{
}
Dungeon::Dungeon(int rows, int cols)
{
	mRooms = new Point2D[rows * cols];
	mNumCols = cols;
	mNumRows = rows;
}
void Dungeon::GenRooms()
{
	int iter = 0;
	for (int x = 0; x < mNumRows; x++)
	{
		for (int y = 0; y < mNumCols; y++)
		{
			mRooms[iter] = Point2D(x, y);
			iter++;
		}
	}
}
bool Dungeon::CheckPlayerPosition(Player *player)
{
	for (int x = 0; x < mNumRows; x++)
	{
		for (int y = 0; y < mNumCols; y++)
		{
			Point2D dungeonSpace(x, y);
			if (player->GetPosition() == dungeonSpace)
				return true;
		}
	}
	return false;
}