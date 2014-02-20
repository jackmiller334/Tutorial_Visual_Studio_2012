#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Enemy
{
public:
	//custom constructor that lets the user set damage, otherwise, set to 50.
	Enemy(int damage = 50);
    ~Enemy();

	void attack() const;
	void setHealth(int health);
	int getHealth();

	void virtual punch();
	void virtual taunt();

	//Assignment operator allowing me to assing one instance to another
	Enemy& operator=(const Enemy& cEnemy);

private:
	int m_health;
protected:
	int m_Damage;
};
/*
			|
			|
			|
			|
		    |
		   \/

This class inherits Enemy's data members and functions. So void attack can also be used by boss.

	NOTE :  -CONSTRUCTOR NOT INHERITED.
		    -COPY CONSTRUCTOR NOT INHERITED.
			-DESTRUCTOR NOT INHERITED.
			-OVERLOADED ASSIGNMENT OPERATOR NOT INHERITED
*/
class Boss : public Enemy 
{
public: 
	//custom constructor that lets the user set damage. If they dont set the damage, set to 70.
	Boss(int damage = 70);                    
	~Boss();


	int m_DamageMultiplier;
	void specialAttack(); // But boss gets its own function that cannot be used by Enemy. 

	void virtual attack() const;
	void virtual taunt(); // This doesnt HAVE to be virtual, but acts as a nice reminder that its a virtual function thats ok to be overwritten.
	void punch(); //... For example, virtual isnt included on this function, but still works the same.

	Boss& operator=(const Boss& cBoss);


};




/*

Polymorphic "bad guy" program 

*/

