#include "Dungeon.h"
void Dungeon::GenRooms()
{
}
Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mPlayer = new Player;
	mNumCols = 5;
	mNumRows = 5;
}
Dungeon::Dungeon(Player * player, int rows, int cols)
{
	mRooms = new Point2D[rows * cols];
	mPlayer = player;
	mNumCols = cols;
	mNumRows = rows;
}
bool Dungeon::CheckPlayerPosition()
{
	for (int i = 0; i <= mNumRows; i++)
	{
		for (int j = 0; j <= mNumCols; j++)
		{
			Point2D thing(i, j);
			if (mPlayer->GetPosition() == thing)
				return false;
		}
	}
}
void Dungeon::PrintRooms()
{
}