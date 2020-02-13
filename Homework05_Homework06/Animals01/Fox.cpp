#include "Fox.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


//std::string foxFoxSays;
//
////int randPhrase = (rand() % 9);
//
//std::string phrase()
//{
//	srand((int)time(0));
//
//
//	std::string foxSays[9] = { "Gering-ding-ding-ding-dingeringeding!", "Wa - pa - pa - pa - pa - pa - pow!", "Hatee-hatee-hatee-ho!",
//	"Tchoff-tchoff-tchoffo-tchoffo-tchoff!", "Chacha-chacha-chacha-chow!", "Fraka-kaka-kaka-kaka-kow!",
//	"A-hee-ahee ha-hee!", "A-oo-oo-oo-ooo! Woo - oo - oo - ooo!", "Wa-wa-way-do, wub-wid-bid-dum-way-do, wa-wa-way-do" };
//
//	 foxFoxSays = foxSays[rand() % 9];
//	 return foxFoxSays;
//}

void Fox::move()
{
	std::cout << " Somewhere deep in the woods, I am hiding!\n\n";
}



Fox::Fox(std::string n) : Animal(n, "Fox", "Gering-ding-ding-ding-dingeringeding!")
{

}

void Fox::speak() const {
	Animal::speak();
	std::cout << " And I like raves!";
}


