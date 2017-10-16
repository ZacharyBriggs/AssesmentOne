#include "Game.h"
#include <stdlib.h>
int main()
{
	Game* newGame = new Game();
	bool gameRunning = true;
	newGame->TitleScreen();
	while (gameRunning == true)
	{
		newGame->PlayerMove();
		if (newGame->HazardCheck() != true)
		{
			if (newGame->PlayAgain())
			{
				delete newGame;
				newGame = new Game();
				system("CLS");
			}
			else
				gameRunning = false;
		}
	}
	delete newGame;
	system("pause");
}