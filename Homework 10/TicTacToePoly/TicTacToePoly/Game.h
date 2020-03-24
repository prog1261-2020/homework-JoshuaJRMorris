#pragma once
#include <string>
class Game
{
public: 
	char square[10] = { 'o','1','2','3','4','5','6','7','8','9' };
	std::string boardView();
};

