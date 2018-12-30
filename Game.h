#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics/RenderWindow.hpp>

#include "CombatController.h"

class Game
{
public:
	Game();
	~Game();
	void run();
private:
	CombatController* m_combatSystem;
	sf::RenderWindow* m_gameWindow;
};

#endif // ! GAME_H

