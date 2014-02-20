#include "Chapter 10 Classes.h"
#include <string>
int main()
{

	Enemy enemy1;


	//Boss 1 Still has a damage data member with a value of 10 because a base class constructor is called before the derived class constructor.
	Boss boss1;

	enemy1.attack();
	boss1.attack();

	boss1.specialAttack();


	// Creates a pointer to a new object created on the heap.
	Boss* bossOnHeap = new Boss;

	//calls the attack method from the heap object
	bossOnHeap->attack();

	//the boss on heap pointer deletes what its pointing at ( boss object )". Pointer is now a dangling pointer.
	delete bossOnHeap;

	
	//sets the dangling pointer to 0. safe :D
	bossOnHeap = 0;


	//Health is a private variable of the base class ENEMY. Using enemies getters and setters, we can change them for each object.
	cout << enemy1.getHealth() << "\n"; 
	cout << boss1.getHealth() << "\n";
	
	enemy1.setHealth(100);
	boss1.setHealth(200);
	
	cout << enemy1.getHealth() << "\n"; 
	cout << boss1.getHealth() << "\n";

	//------------------------------------------------------------------------------------------------------------------------------\\

	Enemy enemy2;
	Boss boss2;

	enemy2.taunt();
	boss2.taunt();

	system("pause");
	return 0;
}