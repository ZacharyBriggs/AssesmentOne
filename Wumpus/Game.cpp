#include "Game.h"
Game::Game()
{
	mPlayer = new Player();
	mWumpus = new Wumpus();
	mDungeon = new Dungeon(mPlayer, 5, 5);
	mTraps = new Item[3];
	mTraps[0]
	mGold = new Item(2, 4);
	mDungeon->PrintRooms();
}
Game::~Game()
{
	delete mPlayer;
	delete mWumpus;
	delete mDungeon;
	delete[] mTraps;
}
void Game::PlayerMove()
{
	char direction;
	std::cout << "Choose a direction.\n";
	std::cin >> direction;
	mPlayer->Move(direction);
}
bool Game::HazardCheck()
{
	if (mDungeon->CheckPlayerPosition() == false)
	{
		std::cout << "You stepped in the poison swamp!\n";
		return false;
	}
	if (mWumpus->CheckForPlayer(mPlayer) == true)
	{
		std::cout << "The Wumpus found you!\n";
		return false;
	}
	if (mWumpus->IsPlayerNearby(mPlayer) == true)
	{
		std::cout << "You smell a foul stench...\n";
	}
	if (mTraps[0].CheckForPlayer(mPlayer) == true || mTraps[1].CheckForPlayer(mPlayer) == true || mTraps[2].CheckForPlayer(mPlayer) == true)
	{
		std::cout << "You fell into a pit!\n";
		return false;
	}
	if (mTraps[0].IsPlayerNearby(mPlayer) == true || mTraps[1].IsPlayerNearby(mPlayer) == true || mTraps[2].IsPlayerNearby(mPlayer) == true)
		std::cout << "You feel a breeze nearby...\n";
	if (mGold->CheckForPlayer(mPlayer) == true)
	{
		std::cout << "You found the gold!\n";
		return false;
	}
	if (mGold->IsPlayerNearby(mPlayer) == true)
	{
		std::cout << "You see a faint shimmering...\n";
	}
	return true;
}
bool Game::PlayAgain()
{
	char answer;
	std::cout << "Would you like to play again? y/n\n";
	std::cin >> answer;
	if (answer = 'y')
		return true;
	else if (answer = 'n')
		return false;
}