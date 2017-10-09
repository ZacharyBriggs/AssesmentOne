#include "Dungeon.h"
#include <iostream>
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
void Dungeon::GenRooms()
{
	int iter = 0;
	for (int i = 0; i <= mNumRows; i++)
	{
		for (int j = 0; j <= mNumCols; j++)
		{
			mRooms[iter] = Point2D(i, j);
			std::cout << mRooms[iter] << std::endl;
			iter++;
		}
	}
}
bool Dungeon::CheckPlayerPosition()
{
	for (int i = 0; i <= mNumRows+1; i++)
	{
		for (int j = 0; j <= mNumCols; j++)
		{
			Point2D thing(i, j);
			if (mPlayer->GetPosition() == thing)
				return true;
		}
	}
	return false;
}
void Dungeon::PrintRooms()
{
	for (int i = 0; i <= mNumRows; i++)
	{
		for (int j = 0; j <= mNumCols; j++)
		{
			std::cout << "<" << i << "," << j << ">";
			if (j == mNumCols)
				std::cout << std::endl;
		}
	}
}