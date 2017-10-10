#include "Game.h"
int main()
{
	bool gameRunning = true;
	Game* newGame = new Game();
	while (gameRunning == true)
	{
		newGame->PlayerMove();
		if (newGame->HazardCheck() == false)
			gameRunning = false;
	}
	delete newGame;
	std::cout << "Game Over.\n";
	system("pause");
}