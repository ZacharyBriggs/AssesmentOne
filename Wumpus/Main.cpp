#include "Game.h"
int main()
{
	Game* newGame = new Game();
	while (newGame->HazardCheck())
	{
		newGame->PlayerMove();
	}
	std::cout << "Game Over.\n";
}