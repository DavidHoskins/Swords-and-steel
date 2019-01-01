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
	mainCombatUpdate();
	mainCombatRender(renderWindow);
}

void CombatController::mainCombatRender(sf::RenderWindow* renderWindow)
{
	UnitStack test = UnitStack(10);
}

void CombatController::mainCombatUpdate()
{
	
}


