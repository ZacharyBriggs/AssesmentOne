#include "Dungeon.h"
Dungeon::Dungeon()
{
	mRooms = new Point2D[25];
	mNumCols = 5;
	mNumRows = 5;
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
	for (int i = 0; i < mNumRows; i++)
	{
		for (int j = 0; j < mNumCols; j++)
		{
			mRooms[iter] = Point2D(i, j);
			iter++;
		}
	}
}
bool Dungeon::CheckPlayerPosition(Player *player)
{
	for (int i = 0; i <= mNumRows+1; i++)
	{
		for (int j = 0; j <= mNumCols; j++)
		{
			Point2D thing(i, j);
			if (player->GetPosition() == thing)
				return true;
		}
	}
	return false;
}
void Dungeon::PrintRooms()
{
	GenRooms();
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