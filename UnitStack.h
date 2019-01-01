#ifndef UNITSTACK_H
#define UNITSTACK_H

#include <math.h>
#include <iostream>

#include <SFML/Graphics/RectangleShape.hpp>

class UnitStack : public sf::RectangleShape
{
public:
	UnitStack(int numberOfUnits);
	~UnitStack();
private:
	int m_numberOfUnits;

	int m_unitWidth = 40;
	int m_unitHeight = 10;

	int m_numOfRows;
	int m_numOfColumns;
};

#endif // ! UNITSTACK_H

