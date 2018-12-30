 // Swords-and-steel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "Game.h"

void main()
{
	Game* gameState = new Game();
	gameState->run();
	delete gameState;
}