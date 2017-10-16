#pragma once
#include "Item.h"
#include "Wumpus.h"
#include "Dungeon.h"
class Game
{
private:
	Player *mPlayer;
	Wumpus *mWumpus;
	Dungeon *mDungeon;
	Item* mTraps;
	Item *mGold;
public:
	Game();
	/*Prototype: Game Game();
	Description: Creates a Game with default mPlayer, mWumpus, mDungeon, mTraps, and
	mGold.
	Arguments: None.
	Precondition: None.
	Postcondition: A default Game is created.
	Protection: Public.
	*/
	~Game();
	void TitleScreen();
	/*Prototype: void TitleScreen();
	Description: Outputs title and controls to the console.
	Arguments: None.
	Precondition: None.
	Postcondition: The title and controls are displayed in the console.
	Protection: Public.
	*/
	void PlayerMove();
	/*Prototype: void PlayerMove();
	Description: Asks the player for input and then calls the Player's Move function
	Arguments: None.
	Precondition: The player is at a position.
	Postcondition: The player's position is changed depending on their input
	Protection: Public
	*/
	bool HazardCheck();
	/*Prototype: bool HazardCheck();
	Description: Checks if the player is on top of or nearby the Wumpus,gold, or a trap.
	Arguments: None.
	Precondition: The player is on or near Wumpus,gold, or a trap.
	Postcondition: Text is outputted if the player is nearby an object or the game ends if
	they're on top of it.
	Protection: Public.
	*/
	bool PlayAgain();
	/*Prototype: bool PlayAgain();
	Description: Asks the player if they want to play again after the game has finished.
	Returns true or false depending on their answer.
	Arguments: None.
	Precondition: The player completes the game and the player is asked if they wish to
	play agian.
	Postcondition: The game is restarted or the application exits.
	Protection: Public.
	*/
};
