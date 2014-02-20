#include "Chapter 10 Classes.h"

Enemy::Enemy(int damage)
{
	m_Damage = damage;
	m_health = 50;
}


Enemy::~Enemy()
{
	cout << " Deleting Enemy " << endl;
}

void Enemy::attack() const 
{
	cout << " ATTACK INFLICTS " << m_Damage << " DAMAGE POINTS! \n";
}

void Enemy::setHealth(int health)
{
	m_health = health;
}

int Enemy::getHealth()
{
	return m_health;
}

void Enemy::taunt()
{
	cout << "ENEMY SAYS - IM GUNNA EAT YA ! "<< endl;
}

void Enemy::punch()
{
	cout << "THE ENEMY PUNCHES YOU FOR " << m_Damage << " DAMAGE POINTS! \n";
}

Enemy& Enemy::operator=(const Enemy& cEnemy)
{
	m_health = cEnemy.m_health;
	m_Damage = cEnemy.m_Damage;
	return *this;
}




/*
This calls the base class constructor and sets damage. 

Here’s what actually happens when Boss is instantiated:

Memory for Boss is set aside (enough for both the Base and Derived portions).
The appropriate Derived constructor is called
The Base object is constructed first using the appropriate Base constructor
The initialization list initializes variables
The body of the constructor executes
Control is returned to the caller
The only real difference between this case and the non-inherited case is that 
before the Derived constructor can do anything substantial, the Base constructor is called first. 
The Base constructor sets up the Base portion of the object, control is returned to the Derived constructor,
and the Derived constructor is allowed to finish up it’s job.
*/

Boss::Boss(int damage ) : Enemy(damage)
{
    m_DamageMultiplier = 3;
}

Boss::~Boss()
{
	cout << "Deleting Boss" << endl;
}

void Boss::specialAttack()
{
	cout << "SPECIAL ATTACK INFLICTS " << (m_Damage * m_DamageMultiplier);
}

void Boss::taunt()
{	
	cout << "BOSS SAYS - IM GUNNA COOK YOU BEFORE I EAT YA ! " << endl;
}

void Boss::punch()
{
	cout << "THE BOSS PUNCHES YOU FOR " << m_Damage << " DAMAGE POINTS !\n";
}


//this method calls the enemy attack function, but also adds an extra part where the boss laughs at you.
void Boss::attack() const
{
	Enemy::attack(); // you can explicitly call a base class member function from any function in a derived class.
	cout << " And laughs at you! " << endl;
}


Boss& Boss::operator=(const Boss& cBoss)
{
	Enemy::operator=(cBoss);
	m_DamageMultiplier = cBoss.m_DamageMultiplier;
}