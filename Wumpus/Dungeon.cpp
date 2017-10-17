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
bool Dungeon::DungeonBorderWarning(Player* player)
{
	for (int w = 0; w < mNumCols; w++)
	{
		if (player->GetPosition() == Point2D(0, w))
		{
			std::cout << "You hear a faint bubbling...\n";
			return true;
		}
	}
	for (int x = 0;x < mNumRows; x++)
	{
		if (player->GetPosition() == Point2D(x, 4))
		{
			std::cout << "You hear a faint bubbling...\n";
			return true;
		}
	}
	for (int y = 4; y >= 0; y -= 1)
	{
		if (player->GetPosition() == Point2D(4, y))
		{
			std::cout << "You hear a faint bubbling...\n";
			return true;
		}
	}
	for (int z = 4; z >= 0; z -= 1)
	{
		if (player->GetPosition() == Point2D(z, 0))
		{
			std::cout << "You hear a faint bubbling...\n";
			return true;
		}
	}
	return false;
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