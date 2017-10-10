#pragma once
#include "Item.h"
#include "Wumpus.h"
#include "Dungeon.h"
class Game
{
private:
	Player *mPlayer;
	Wumpus *mWumpus;
	Dungeon *mDungeon;
	Item* mTraps;
	Item *mGold;
public:
	Game();
	void PlayerMove();
	bool HazardCheck();
	bool PlayAgain();
	~Game();
};
