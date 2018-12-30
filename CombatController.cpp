#include "pch.h"
#include "CombatController.h"


CombatController::CombatController()
{
}


CombatController::~CombatController()
{
}


void CombatController::startCombat(sf::RenderWindow* renderWindow)
{
	while(renderWindow->isOpen())
	{
		mainCombatUpdate();
		mainCombatRender(renderWindow);
	}
}

void CombatController::mainCombatRender(sf::RenderWindow* renderWindow)
{
	sf::RectangleShape test = sf::RectangleShape(sf::Vector2f(10.0f, 10.0f));

	renderWindow->clear();
	renderWindow->draw(test);
	renderWindow->display();
}

void CombatController::mainCombatUpdate()
{
	
}


