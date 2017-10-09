#include "String.h"
#include "Point2D.h"
#include "Dungeon.h"
#include "Entity.h"
#include "Player.h"
#include "Wumpus.h"
#include <iostream>
#include <fstream>
int main()
{
	Point2D* testOne = new Point2D(1, 1);
	Point2D* testTwo = new Point2D(1,1);
	*testOne == *testTwo;
	Player* Dude = new Player();
	Wumpus* Wumpo = new Wumpus();
	Dungeon WumpusLand(Dude, 5, 5);
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
	}
	std::cout << "Game Over.\n";
	system("pause");
}