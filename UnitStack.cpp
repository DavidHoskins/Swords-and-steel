#include "pch.h"
#include "UnitStack.h"


UnitStack::UnitStack(int numberOfUnits)
{
	if(numberOfUnits > 3)
	{
		int value = sqrt(numberOfUnits);
		m_numOfRows = value + 1;
		m_numOfColumns = value;

		int temp = numberOfUnits;

		for (int i = 0; i < m_numOfRows; i++) 
		{
			if (numberOfUnits > m_numOfColumns) 
			{
				numberOfUnits -= m_numOfColumns;
				std::cout << m_numOfColumns << std::endl;
			}
			else
			{
				std::cout << numberOfUnits << std::endl;
			}
		}
	}
	else
	{
		m_numOfColumns = numberOfUnits;
		m_numOfRows = 1;
	}
}


UnitStack::~UnitStack()
{
}
