#include "Game.h"
#include <iostream>
#include <sstream>

std::string Game::boardView()
{
	std::stringstream ss{ "" };


	ss << "     |     |     \n" <<
		  "  "<< square[1] <<  "  |  " << square[2] << "  |  " << square[3] << "  \n" <<
		  "_____|_____|_____\n" <<
		  "     |     |     \n" <<
		"  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << "  \n" <<
		  "_____|_____|_____\n" <<
		  "     |     |     \n" <<
		"  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << "  \n" <<
		  "     |     |     \n\n";

	std::cout << ss.str();
	return ss.str();
}
