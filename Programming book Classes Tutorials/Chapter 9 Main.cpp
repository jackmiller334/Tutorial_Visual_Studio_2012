//
//#include "Chapter 9 Classes.h"
////#include "millerMath.h"
//#include "Vector3D.h"
//using namespace std;
//
//
//int* intOnHeap();
//void leak1();
//void leak2();
//
//void testDestructor();
//void testCopyConstructor(Crit aCopy);
//void testAssignmentOp();
//
//int main()
//{
//
//	Critter socks("Socks");
//	cout << "My Critters name is " << socks.getName() << endl;
//	
//	cout << "Creating Critter Farm" << endl;
//	Farm myFarm(3);
//	
//	myFarm.rollCall();
//	
//	
//	Critter critter("Socks2");
//	
//	Peek(critter);
//	cout << critter; // using << overload to display critter
//	
//	
//	int* pHeap = new int; // the 'NEW' operator allocates memory on the heap and returns its address. 
//	*pHeap = 10; // assigns 10 to the new chunk of memory. 
//	cout << "*pHeap: " << *pHeap << "\n\n";
//	
//	
//	int* pHeap2 = intOnHeap();// This function creates a new integer on the heap and returns it to pHeap2. a big advantage of memory on the heap is that it can persist beyond the function that it was allocated. 
//	cout << "*pHeap: " << *pHeap2 << "\n\n";
//	
//	// You have to explicitly free data that you have made on the heap. A good rule of thumb is that, with every 'new', a 'delete' should also be called.
//	cout << " Freeing memory pointed to by pHeap. \n\n";
//	delete pHeap;
//	
//	cout << " Freeing memory pointed to by pHeap2. \n\n";
//	delete pHeap2;
//	
//	//get rid of pointers that point to data that is no longer avaiable. 
//	pHeap = 0;
//	pHeap2 = NULL; // Can use NULL or 0;
//
//
//
//
//	testDestructor();
//	cout << endl;
//	Crit crit("Poochie",5);
//	crit.Greet();
//	testCopyConstructor(crit);
//	crit.Greet();
//	cout << endl;
//	testAssignmentOp();
//
//	/////////////////////////////////////////////////////////////////////////////
//
//	Lobby myLobby;
//	int choice;
//
//	do
//	{
//		cout << myLobby;
//		cout << "\nGAME LOBBY\n";
//		cout << "0 - Exit the Program\n";
//		cout << "1 - Add a player\n";
//		cout << "2 - Remove a player\n";
//		cout << "3 - Clear the lobby\n";
//
//		cout << endl;
//		cout << "Enter Choice: ";
//		cin >> choice;
//
//		switch(choice)
//		{
//		case 1: myLobby.addPlayer();
//			break;
//		case 2: myLobby.removePlayer();
//			break;
//		case 3: myLobby.Clear();
//			break;
//		}
//
//		}while(choice != 0);
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
//	system("pause");
//	return 0;
//}
//
//int* intOnHeap()
//{
//	int* newInt = new int(20); // allocates a piece of memory on the heap ( an integer ) and gives it the value 20. This then gets stored in a pointer to the memory address on the heap and returned.
//	return newInt;
//}
//
//void leak1()
//{
//	int* drip1 = new int(30);
//}
//
//void leak2()
//{
//	int* drip2 = new int(50);
//	drip2 = new int(100);
//	delete drip2;
//}
//
//void testDestructor()
//{
//	Crit toDestroy("Rover", 3);
//	toDestroy.Greet();
//
//
//
//	// my own stuff 
////	Crit* pCrit;
//	//pCrit = new Crit;
//	
//	//pCrit->Greet();
//	//delete pCrit;
//	/////////////////
//}
//
//void testCopyConstructor(Crit aCopy)
//{
//	aCopy.Greet();
//}
//
//void testAssignmentOp()
//{
//
//	Crit crit1("steven",5);
//	Crit crit2("Donut", 9);
//
//	crit1 = crit2;
//
//	crit1.Greet();
//	crit2.Greet();
//
//	Crit crit3("Kierra",2);
//	crit3 = crit3;
//	crit3.Greet();
//}