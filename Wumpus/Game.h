#pragma once
#include "Item.h"
#include "Dungeon.h"
class Game
{
private:
	Player *mPlayer;
	Wumpus *mWumpus;
	Dungeon *mDungeon;
	Item *mTraps;
	int mNumTraps;
	Item mGold;
public:
	Game();
	~Game();
	void PlayerMove();
	bool HazardCheck();
	bool PlayAgain();
};
