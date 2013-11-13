#include "Chapter 8 Classes.h"

int Critter::s_Total = 0;

Critter::Critter()
{
	hunger = 1;
	s_Total++;
	std::cout << s_Total << std::endl;
	
}



Critter::~Critter()
{
}



void Critter::critterTalk()
{
	std::cout << "Hello 1\n";
}


int Critter::getHunger()
{
	return hunger;
}

void Critter::setHunger(int set)
{
	hunger = set;
}

int Critter::get_s_Total()
{
	return s_Total;
}