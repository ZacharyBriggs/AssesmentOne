#include "Game.h"
Game::Game()
{
	Player* Dude = new Player();
	Wumpus* Wumpo = new Wumpus();
	Dungeon WumpusLand(Dude, 5, 5);
	Item trapOne(3, 3);
	Item trapTwo(5, 1);
	Item trapThree(1, 4);
	Item gold(2, 4);
}