#include "CritterFarm.h"


Farm::Farm(int spaces)
{
	m_Critters.reserve(spaces);
}


void Farm::add(Critter& aCritter)
{
	m_Critters.push_back(aCritter);//adds the critter object into the m_Critters vector 
}

void Farm::RollCall() 
{
	for(vector<Critter>::const_iterator iter=m_Critters.begin();
	iter != m_Critters.end();
	++iter)
	cout << iter->GetName() << " here." << endl;
}

Farm::~Farm()
{
}