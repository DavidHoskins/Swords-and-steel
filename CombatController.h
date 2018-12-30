#pragma once
class CombatController
{
public:
	CombatController();
	~CombatController();

	void startCombat();
private:
	void mainCombatUpdate();
};

