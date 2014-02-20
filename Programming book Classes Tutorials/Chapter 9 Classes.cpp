//#include "Chapter 9 Classes.h"
//
//
//Critter::Critter(const string& name)
//{
//	this->m_Name = name;
//}
//
//
//Critter::~Critter()
//{
//}
//
//inline string Critter::getName() const 
//{
//	return m_Name;
//}
//
//void Peek(const Critter& aCritter)
//{
//	cout << aCritter.m_Name << endl;
//}
//
//
//ostream& operator<<(ostream& os, const Critter& aCritter)
//{
//	os << "Critter object - ";
//	os << "m_Name: " << aCritter.m_Name;
//	return os;
//}
//*this function overloads the << operator so that when i send a critter object with the << to cout,
//the data memeber m_Name is displayed. Essentially, the function allows me to easily display Critter Objects.
//*/
//
//
///////////////////////////////////////////////////////////////////
//Farm::Farm(int spaces)
//{
//	m_Critters.reserve(spaces);
//}
//
//Farm::~Farm()
//{
//	cout << "Deleting Farm Object" << endl;
//	system("pause");
//}
//
//void Farm::Add(const Critter& aCritter)
//{
//	m_Critters.push_back(aCritter);
//}
//
//void Farm::rollCall() const
//{
//	for(vector<Critter>::const_iterator iter = m_Critters.begin();iter!=m_Critters.end();iter++)
//	{
//		cout << iter->getName();
//	}
//}
//
//
//
//Crit::Crit(const string& name, int age)
//{
//	cout << "Constructor called\n";
//	m_pName = new string(name);
//	m_Age = age;
//}
//
//Crit::~Crit()
//{
//	cout << "Calling destructor for 'CRIT' " << endl;
//	delete m_pName;
//}
//
//Crit::Crit(const Crit& c)
//{
//	cout << "Copy Constructor called\n";
//	m_pName = new string(*(c.m_pName)); // needs to create a new string on the heap and give it what c.m_pName was storing but in the new string on the heap. 
//	m_Age = c.m_Age;
//}
//
//Crit& Crit::operator=(const Crit& c)
//{
//	cout << "Overloaded assignment operator called\n";
//	if(this!=&c) // If the memory address of the original crit object is the same as the new one, dont bother changing the heap around.
//	{
//		delete m_pName;
//		m_pName = new string(*(c.m_pName));
//		m_Age = c.m_Age;
//	}
//	return *this;
//}
//
//void Crit::Greet() const
//{
//	cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old. \n";
//	cout << "&m_pName : " << cout << &m_pName << endl;
//}
//
//
//
//
//
////////////////////////////////////////////////////////////////////////////////////////
//Player::Player(const string& name)
//{
//	this->m_Name = name;
//	m_pNext = 0; // sets the m_pNext pointer to null;
//	m_pPrevious = 0;
//}
//
//Player::~Player()
//{
////	cout << "Deleting Player" << endl;
//}
//
//
//string Player::getName() const
//{
//	return m_Name;
//}
//
//Player* Player::getNext() const
//{
//	return m_pNext;
//}
//
//Player* Player::getPrevious() const
//{
//	return m_pPrevious;
//}
//
//
//
//void Player::setNext(Player* next)
//{
//	if(next == NULL)
//	{
//		m_pNext = 0;
//		return;
//	}
//	m_pNext = next;
//}
//
//void Player::setPrevious(Player* previous)
//{
//	m_pPrevious = previous;
//}
//
//
//ostream& operator<<(ostream& os, const Player& aPlayer)
//{
//
//	//couts a player.
//	Player* displayPlayer = new Player(aPlayer);
//	os << displayPlayer->getName();
//	os << "\n";
//
//	delete displayPlayer;
//	displayPlayer = NULL;
//	
//
//	if(displayPlayer!=NULL)
//	{
//		cout << " Display Player NOT DELETED -  MEMORY LEAK " << endl;
//	}
//
//	
//   //
//
//	//Player* pIter = aLobby.m_pHead;
//   //
//	//os << "\nHere's whos in the game lobby: \n";
//   //
//	//if(pIter ==0)
//	//{
//	//	os << " The lobby is empty \n";
//	//}
//   //
//	//else 
//	//{
//	//	while(pIter!=0)
//	//	{
//	//		os << pIter->getName() << endl;
//	//		pIter= pIter->getNext();
//	//	}
//   //
//	//}
//   //
//	return os;
//}
//
//
//
//Lobby::Lobby()
//{
//	m_pHead = 0;
//	m_pTail = 0;
//}
//
//Lobby::~Lobby()
//{
//	Clear();
//}
//
//
//void Lobby::addPlayer()
//{
//	//create a new player node.
//
//
//	string name;//gets a name from the user
//	cin >> name;
//
//	Player* pNewPlayer = new Player(name); // creates a new player on the head called pNewPlayer.
//
//
//	//if the list is empty ( Lobby is empty basically ) make this new player the 'head' of the list.
//	if(m_pHead == 0)
//	{
//		m_pHead = pNewPlayer;
//		m_pTail = pNewPlayer;
//	}
//
//
//	else 
//	{
//		//creates a pointer to a player object, and sets it to the first player in the list.
//		//Player* pIter = m_pHead;
//
//		
//		//while there is a next player in the list, move along to the next player, and check again.
//	
//		Player* prevIter = m_pHead;
//		while(prevIter->getNext() != 0)
//		{
//			prevIter = prevIter -> getNext();
//		}
//		
//		
//		m_pTail -> setNext(pNewPlayer);
//	
//		m_pTail = pNewPlayer;
//
//		m_pTail -> setPrevious(prevIter);
//		cout << " m_pTail is now : " <<  *(m_pTail);
//		cout << " Previous is now : " << *(m_pTail->getPrevious());
//
//	}
//
//}
//
//	
//
//
//void Lobby::removePlayer()
//{
//	//if the head of the lobby is empty.. display message
//	if(m_pHead == 0)
//	{
//		cout << "The game lobby is empty.\n";
//	}
//
//
//
//	else 
//	{
//
//		char player;
//		cout << "Do you want to delete the first player in the lobby or the last? \n";
//		cout << "F/L : ";
//		cin >> player;
//
//		if(player == 'f')
//		{
//		
//		cout << "Deleting first Player... \n";
//		Player* pTemp = m_pHead; // create a temporary pointer to the top player in the lobby
//		m_pHead = m_pHead->getNext(); // Sets the pointer that points to the top of the lobby to the next player. 
//		delete pTemp; // deletes the top player from the heap.
//		}
//
//		else if(player == 'l')
//		{
//		cout << "Deleting Last Player... \n";
//		Player* pTemp = m_pTail;
//		m_pTail = m_pTail->getPrevious();
//		
//		//fixes unhandled exception. [player to delete] -> [0]. 
//		m_pTail->setNext(NULL);
//		delete pTemp;
//		}
//		
//}
//
//}
//
//
//void Lobby::Clear()
//{
//	while(m_pHead != 0)
//	{
//		removePlayer();
//	}
//}
//
//ostream& operator<<(ostream& os, const Lobby& aLobby)
//{
//	Player* pIter = aLobby.m_pHead;
//
//	os << "\nHere's whos in the game lobby: \n";
//
//	if(pIter ==0)
//	{
//		os << " The lobby is empty \n";
//	}
//
//	else 
//	{
//		while(pIter!=0)
//		{
//			cout<< *(pIter);
//			pIter = pIter->getNext();
//		}
//
//	}
//
//	return os;
//}
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
//
//
//
//
//
//
//
//
//
//Jack::Jack(const string& name,int age, double height)
//{
//	m_Name = new string("name");
//	this->age = age;
//	this->height = height;
//
//}
//
//Jack::~Jack()
//{
//	delete m_Name;
//}
//
//Jack::Jack(const Jack& jack)
//{
//	if(this!=&jack)
//	{
//		delete m_Name;
//		m_Name = new string (*(jack.m_Name));
//		age = jack.age;
//		height = jack.height;
//
//	}
//}
//
//void Jack::testCopy()
//{
//	Jack jack1("Jack1",19,6.3);
//	Jack jack2("Jack2",20,6.2);
//}
//
//
//
//
//VectorJ::VectorJ(int x, int y)
//{
//	this->x=x;
//	this->y=y;
//}
//
//
//VectorJ::~VectorJ() 
//{
//}
//
//VectorJ VectorJ::operator+(const VectorJ &vector)
//{
//	return VectorJ(x+vector.x,y+vector.y);
//}
//
//VectorJ::VectorJ()
//{}