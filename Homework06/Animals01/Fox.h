
#pragma once
#include "Animal.h"

class Fox : public Animal
{
public:
	Fox(std::string name);
	void speak()const override;
	void phrase();
	void move() override;
};

