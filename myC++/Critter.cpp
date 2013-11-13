#include "Critter.h"
#include <stdio.h>




Critter::Critter(const string& name)
{
	m_Name=name;
}

string Critter::GetName() const
{
	return m_Name;
}


Critter::~Critter() 
{
}
















/*
*** THIS IS FOR JUST CHAPTER 8 OF THE BOOK, ABOUT CLASSES AND GETTERS AND SETTERS ETC


Critter::Critter()
{}

void Critter::act()
{

cout << "The panda walks over to the window" << endl;
boredom++;
}

Critter::Critter(int initialHunger, int initialBoredom)
{
	hunger=initialHunger;
	boredom=initialBoredom;
	cout << " A new little panda has been born " << endl;
	cout << " It opens its eyes and looks at you " << endl;
	//cout << " Its Hunger is :" << " " << hunger << endl;
}



Critter::~Critter()
{
}

void Critter::setHunger(int newHunger) {
	hunger = newHunger;
	cout <<"the tigers new hunger is " << endl;
}

int Critter::getHunger()
{
	return hunger;
}


 inline int Critter::getMood() const
{
	//int display = hunger+boredom;
	//cout << display << endl;
	return (hunger+boredom);
}

void Critter::passTime(int time)
{
	hunger+= time;
	boredom +=time;
}

void Critter::talk()
{
	cout << "Im a tiger and i feel ";
	int mood=getMood();
	if (mood >15)
		cout << "Angry.\n";
	else if(mood >10)
		cout << "frustrated.\n";
	else if (mood>5)
		cout << "content " << endl;
	else 
		cout << "happy" << endl;

	cout << " " << endl;

	int hunger=getHunger();
	if(hunger >10)
		cout<< "im really hungry" << endl;
	else if(hunger >7)
		cout << "im quite hungry" << endl;
	else if(hunger >2)
		cout << "Im a little bit hungry" << endl;
	else 
		cout << " Im not hungry :) " << endl;

	passTime();
}

void Critter::play(int fun)
{
	cout << " haha that tickles \n";
	cout << " " << endl;
	boredom -=fun;
	if (boredom <0)
		boredom=0;
	passTime();
}

void Critter::feed(int food)
{
cout <<"Burp, hehe.\n";
cout << " " << endl;
hunger -= food;
if(hunger<0)
{
hunger=0;
}

passTime();
}
*/


