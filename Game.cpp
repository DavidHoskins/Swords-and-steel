#include "pch.h"
#include "Game.h"


Game::Game()
{
	m_gameWindow = new sf::RenderWindow(sf::VideoMode(1000, 1000), "Swords and steel", sf::Style::Default);
	m_combatSystem = new CombatController();
}


Game::~Game()
{
	delete m_combatSystem;
}

void Game::run()
{
	m_combatSystem->startCombat(m_gameWindow);
}
