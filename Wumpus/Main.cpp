#include "String.h"
#include "Point2D.h"
#include "Dungeon.h"
#include "Entity.h"
#include "Player.h"
#include "Wumpus.h"
#include "Pitfall.h"
#include <iostream>
#include <fstream>
int main()
{
	Player* Dude = new Player();
	Wumpus* Wumpo = new Wumpus();
	Dungeon WumpusLand(Dude, 5, 5);
	Pitfall trapOne(3,3);
	Pitfall trapTwo(5, 1);
	Pitfall trapThree(1, 4);
	WumpusLand.PrintRooms();
	bool gameRunning = true;
	while (gameRunning == true)
	{
		char direction;
		std::cout << "Choose a direction.\n";
		std::cin >> direction;
		Dude->Move(direction);
		if (WumpusLand.CheckPlayerPosition() == false)
		{
			std::cout << "You stepped in the poison swamp!\n";
			gameRunning = false;
		}
		if (Wumpo->CheckForPlayer(Dude) == true)
		{
			std::cout << "The Wumpus found you!\n";
			gameRunning = false;
		}
		if (Wumpo->IsPlayerNearby(Dude) == true)
			std::cout << "You smell a foul stench...\n";
		if (trapOne.CheckForPlayer(Dude) == true || trapTwo.CheckForPlayer(Dude) == true || trapThree.CheckForPlayer(Dude) == true)
		{
			std::cout << "You fell into a pit!\n";
			gameRunning = false;
		}
		if (trapOne.IsPlayerNearby(Dude) == true || trapTwo.IsPlayerNearby(Dude) == true || trapThree.IsPlayerNearby(Dude) == true)
			std::cout << "You feel a breeze nearby...\n";
	}
	std::cout << "Game Over.\n";
	system("pause");
}