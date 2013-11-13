#include <iostream>
#include <string>
#include <vector>


#ifndef CRITTER
#define CRITTER

class Critter
{
public:
	Critter();
	~Critter();

	
	static int s_Total; // this can be accessed anywhere in your program. using Critter::s_Total;
	static int get_s_Total(); // static functions cannot access non-static data members
	void critterTalk();
	void setHunger(int set);
	int getHunger();
	
private:
	int hunger;
protected:

};



#endif 
/*
int Critter::s-Total =5;  - Static data members cannot be initialized in the header file ( Has to be in the CPP ).
*/



