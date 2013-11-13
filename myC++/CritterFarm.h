#ifndef FARM
#define FARM

#include <iostream>
#include <vector>
#include <string>
#include "Critter.h"

class Farm
{
public:
Farm(int spaces = 1);
~Farm();
void add(Critter& aCritter);
void RollCall();

private:
	vector<Critter> m_Critters;
protected:
};

#endif