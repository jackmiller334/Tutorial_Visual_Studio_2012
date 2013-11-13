#ifndef CRITTER_H
#define CRITTER_H

#include <time.h>
#include <iostream>
#include <fstream>

using namespace std;
class Critter
{
public:
	//Critter();
	Critter(const string& name = "");
	~Critter();
	string GetName() const;
	


	/* THIS CODE IS FOR CHAPTER 8 OF THE BOOK, 
	Critter();
	Critter(int initialHunger, int initialBoredom);
	
	~Critter();
	void setHunger( int setHunger);
	int getHunger();
	void talk();
	void play(int fun = 10);
	void feed(int food=10);
	void act();

	*/
	
private:
	
	string m_Name;
	
	
	
	/*
	int getMood() const;
	int boredom;
	int hunger;
	void passTime(int time =1);*/
};

#endif 