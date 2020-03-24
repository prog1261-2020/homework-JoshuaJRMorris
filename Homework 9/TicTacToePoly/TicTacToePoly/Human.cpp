#include "Human.h"
#include <iostream>

Human::Human(char p) : Player(p){}

int Human::getValidInput()
{
	int playerInput;
	std::cin >> playerInput;
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		std::cout << "\n\n Please enter a valid number (0 to 8) ";
		std::cin >> playerInput;
	}
	return playerInput;
}

int Human::getMove()
{
	std::cout << "Player " << getPiece() << "chose: ";
	int playerInput = getValidInput();
	return playerInput;
}
