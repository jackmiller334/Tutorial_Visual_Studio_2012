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



/*this calls the base class constructor and sets damage. 
The base class constructor sets the damage argument as its damage.
This call to the base class constructor means that our derived class does the same thing*/
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
void Boss::attack()
{
	Enemy::attack(); // you can explicitly call a base class member function from any function in a derived class.
	cout << " And laughs at you! " << endl;
}