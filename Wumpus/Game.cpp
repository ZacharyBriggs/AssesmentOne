#include "Game.h"
Game::Game()
{
	mPlayer = new Player();
	mWumpus = new Wumpus();
	mDungeon = new Dungeon(5, 5);
	mTraps = new Item[3];
	mTraps[0] = Item(new Point2D(1,4));
	mTraps[1] = Item(new Point2D(3,3));
	mTraps[2] = Item(new Point2D(5,1));
	mGold = new Item(new Point2D(2, 4));
	mDungeon->PrintRooms();
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
	if (mDungeon->CheckPlayerPosition(mPlayer) == false)
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
	if (mTraps[0].CheckForPlayer(mPlayer) || mTraps[1].CheckForPlayer(mPlayer) || mTraps[2].CheckForPlayer(mPlayer))
	{
		std::cout << "You fell into a pit!\n";
		return false;
	}
	if (mTraps[0].IsPlayerNearby(mPlayer) || mTraps[1].IsPlayerNearby(mPlayer) || mTraps[2].IsPlayerNearby(mPlayer))
	{
		std::cout << "You feel a breeze nearby...\n";
	}
	if (mGold->CheckForPlayer(mPlayer) == true)
	{
		std::cout << "You found the gold!\n";
		return false;
	}
	if (mGold->IsPlayerNearby(mPlayer) == true)
		std::cout << "You see a faint shimmering...\n";
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