#include "String.h"
#include "Point2D.h"
#include "Dungeon.h"
#include <iostream>
#include <fstream>
int main()
{
	Player* Dude = new Player();
	Dungeon WumpusLand(Dude, 5, 5);
	WumpusLand.PrintRooms();
	bool gameRunning = true;
	while (gameRunning == true)
	{
		char direction;
		std::cout << "Choose a direction.\n";
		std::cin >> direction;
		Dude->Move(direction);
		if (WumpusLand.CheckPlayerPosition() == true)
		{
			std::cout << "You stepped in the poison swamp!\n";
			gameRunning = false;
		}
	}
	std::cout << "Game Over\n";
	system("pause");
}