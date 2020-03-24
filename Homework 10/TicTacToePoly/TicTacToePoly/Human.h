#pragma once
#include "Player.h"

class Human : public Player
{
public:
	Human(char p);
	int getValidInput();
	int getMove() override;
};

