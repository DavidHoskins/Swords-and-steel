#ifndef COMBATCONTROLLER_H
#define COMBATCONTROLLER_H

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

class CombatController
{
public:
	CombatController();
	~CombatController();

	void startCombat(sf::RenderWindow* renderWindow);
private:
	void mainCombatUpdate();
	void mainCombatRender(sf::RenderWindow* renderWindow);
};

#endif // ! COMBATCONTROLLER_H