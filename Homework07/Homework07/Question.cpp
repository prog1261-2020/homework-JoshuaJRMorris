#include "Question.h"
#include <iostream>
#include <fstream>
#include <string>

Question::Question()
{

	std::ifstream inFile;
	inFile.open("../Trivia.txt");

	if (inFile.fail()) {

		std::cerr << "File not opened\n";
		exit(1);
	}

	char c;
	char buff[8];

	do {
	inFile.get(buff, sizeof(buff));		//gets one line at a time
	inFile.get(c);
	std::cout << buff;
} while (!inFile.eof());
}	
