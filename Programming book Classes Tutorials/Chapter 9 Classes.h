//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//class Critter
//{
//		friend void Peek(const Critter& aCritter); //A friend function is a function that is not a member of a class but has access to the class's private and protected members.
//
//
//		/*this function overloads the << operator so that when i send a critter object with the << to cout,
//		the data memeber m_Name is displayed. Essentially, the function allows me to easily display Critter Objects.
//		The function can directly access the private data member of m_Name of a Critter Object because the function
//		is a friend function of the CRITTER class.*/
//		friend ostream& operator<<(ostream& os,const Critter& aCritter);
//
//
//public:
//	Critter(const string& name = "");
//	~Critter();
//
//	string getName() const;
//private:
//	string m_Name;
//};
//
//
//class Farm
//{
//public:
//	Farm(int spaces = 1);
//	~Farm();
//	void Add(const Critter& aCritter);
//	void rollCall() const;
//private:
//	vector<Critter> m_Critters;
//};
//
//
//
///*Code james sent to help explain friend functions
//class Foo
//{
//public:
//  friend void func2();
//
//  int m_publicInt;
//private:
//  int m_privateInt;
//};
// 
//void func1()
//{
//  Foo f;
//  f.m_publicInt++; // fine;
////  f.m_privateInt++; // compile error - accessing a private member variable of object type Foo
//}
//
//void func2()
//{
//  Foo f;
//  f.m_publicInt++; // fine;
//  f.m_privateInt++; // also fine, friend function allows it.
//}
//*//////////////////////////////////////
//
//
//class Crit
//{
//public:
//	Crit(const string& name = "", int age = 0);
//	~Crit();
//	Crit(const Crit& c);
//	Crit& Crit::operator=(const Crit& c); // overloaded operator. This operator assigns one critter to another. ( So crit1 = crit 2 ). But because crit object has a data member on the heap, this will need to be dealt with.
//	void Greet() const;
//
//private:
//	string* m_pName; // a pointer to a string object ( Thatll be created on the heap in the class's constructor )
//	int m_Age;
//
//};
//
//
//class Player
//{
//public:
//	//CHAPTER 9 EXERCISE 1  - Write a friend function of the player class that allows a PLAYER object to be sent to cout. Then use this function in the LOBBY class.
//	friend ostream& operator<<(ostream& os, const Player& aPlayer);
//
//	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//	Player(const string& name = "");
//	~Player();
//	string getName() const;
//	
//	Player* getNext() const;
//	Player* getPrevious() const;
//	
//	void setNext(Player* next);
//	void setPrevious(Player* previous);
//private:
//	string m_Name; //Holds the name of a player.
//	Player* m_pNext; // Holds a pointer to a player object.
//	Player* m_pPrevious; // Holds a pointer to the previous player.
//
//};
//
//
//class Lobby
//{
//public:
//
//
//	friend ostream& operator<<(ostream& os, const Lobby& aLobby);
//
//	Lobby();
//	~Lobby();
//
//	void addPlayer();
//	void removePlayer();
//	void Clear();
//private:
//	Player* m_pHead;
//	Player* m_pTail;
//};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//class VectorJ
//{
//public:
//	VectorJ();
//	VectorJ(int x, int y);
//	~VectorJ();
//	int x;
//	int y;
//
//
//	VectorJ VectorJ::operator+(const VectorJ& vector);
//
//
//};
//
//
//
//
//
//class Jack
//{
//   
//public:
//	Jack(const string& name,int age, double height);
//	~Jack();
//	Jack(const Jack& jack);
////	Jack& Jack::operator=(const Jack& j);
//	void testCopy();
//	string* m_Name;
//	double height;
//	int age;
//};
//
//
