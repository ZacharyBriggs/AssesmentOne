#include "Game.h"
#include <stdlib.h>
int main()
{
	Game* newGame = new Game();
	newGame->TitleScreen();
	while (newGame->HazardCheck())
	{
		newGame->PlayerMove();
		system("pause");
		system("CLS");
	}
	system("pause");
}