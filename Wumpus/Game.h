#pragma once
#include "String.h"
#include "Point2D.h"
#include "Dungeon.h"
#include "Entity.h"
#include "Player.h"
#include "Wumpus.h"
#include "Item.h"
#include <iostream>
class Game
{
public:
	Game();
	void newGame()
	{
		Player* Dude = new Player();
		Wumpus* Wumpo = new Wumpus();
		Dungeon WumpusLand(Dude, 5, 5);
		Item trapOne(3, 3);
		Item trapTwo(5, 1);
		Item trapThree(1, 4);
		Item gold(2, 4);
		WumpusLand.PrintRooms();
	}
	void PlayerMove(Player* dude)
	{
		char direction;
		std::cout << "Choose a direction.\n";
		std::cin >> direction;
		dude->Move(direction);
	}
	bool HazardCheck(Dungeon world,Wumpus* wumpo,Item gold,Player* dude,Item trapOne,Item trapTwo,Item trapThree)
	{
		if (world.CheckPlayerPosition() == false)
		{
			std::cout << "You stepped in the poison swamp!\n";
			return false;
		}
		if (wumpo->CheckForPlayer(dude) == true)
		{
			std::cout << "The Wumpus found you!\n";
			return false;
		}
		if (wumpo->IsPlayerNearby(dude) == true)
			std::cout << "You smell a foul stench...\n";
		if (trapOne.CheckForPlayer(dude) == true || trapTwo.CheckForPlayer(dude) == true || trapThree.CheckForPlayer(dude) == true)
		{
			std::cout << "You fell into a pit!\n";
			return false;
		}
		if (trapOne.IsPlayerNearby(dude) == true || trapTwo.IsPlayerNearby(dude) == true || trapThree.IsPlayerNearby(dude) == true)
			std::cout << "You feel a breeze nearby...\n";
		if (gold.CheckForPlayer(dude) == true)
		{
			std::cout << "You found the gold!\n";
			return false;
		}
		if (gold.IsPlayerNearby(dude) == true)
			std::cout << "You see a faint shimmering...\n";
	}
	bool PlayAgain()
	{
		char answer;
		std::cout << "Would you like to play again? y/n\n";
		std::cin >> answer;
		if (answer = 'y')
			return true;
		else if (answer = 'n')
			return false;
	}
};
