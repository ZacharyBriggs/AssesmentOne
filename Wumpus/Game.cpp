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
	mDungeon->GenRooms();
}
Game::~Game()
{
}
void Game::TitleScreen()
{
	std::cout << "WUMPUS WORLD\n";
	std::cout << "Input w to go north,a to go west,s to go south, or d to go east.\n";
	system("pause");
	system("CLS");
	std::cout << "You take your first steps into the infamous Wumpus' swamp.\n";
	std::cout <<"You've only heard of the fearsome beast in ancient tales told by your elders \nand now you stand firm in the beast's homeland.\n";
	std::cout <<"Can you dodge the fearsome beast and his dastardly traps to find his\nillustrious gold? Find out... now...\n";
	system("pause");
	system("CLS");
}
void Game::PlayerMove()
{
	char direction;
	std::cout << "Choose a direction.\n";
	std::cin >> direction;
	mPlayer->Move(direction);
	system("pause");
	system("CLS");
}
bool Game::HazardCheck()
{
	bool event = false;
	if (mDungeon->CheckPlayerPosition(mPlayer) == false)
	{
		std::cout << "You stepped in the poison swamp!\nGame Over...\n";
		return false;
	}
	if (mWumpus->CheckForPlayer(mPlayer) == true)
	{
		std::cout << "The Wumpus found you!\nGame Over...\n";
		return false;
	}
	if (mTraps[0].CheckForPlayer(mPlayer) || mTraps[1].CheckForPlayer(mPlayer) || mTraps[2].CheckForPlayer(mPlayer))
	{
		std::cout << "You fell into a pit!\nGame Over...\n";
		return false;
	}
	if (mGold->CheckForPlayer(mPlayer) == true)
	{
		std::cout << "You found the gold!\nYou can finally pay off your college debt!\n";
		return false;
	}
	if (mWumpus->IsPlayerNearby(mPlayer) == true)
	{
		std::cout << "You smell a foul stench...\n";
		event = true;
	}
	if (mTraps[0].IsPlayerNearby(mPlayer) || mTraps[1].IsPlayerNearby(mPlayer) || mTraps[2].IsPlayerNearby(mPlayer))
	{
		std::cout << "You feel a breeze nearby...\n";
		event = true;
	}
	if (mGold->IsPlayerNearby(mPlayer) == true)
	{
		std::cout << "You see a faint shimmering...\n";
		event = true;
	}
	if (event == false)
	{
		std::cout << "You're standing in an empty field.\n";
	}
	return true;
}
bool Game::PlayAgain()
{
	char answer;
	std::cout << "Would you like to play again? y/n\n";
	std::cin >> answer;
	if (answer == 'y')
	{
		return true;
	}
	else if (answer == 'n')
		return false;
}