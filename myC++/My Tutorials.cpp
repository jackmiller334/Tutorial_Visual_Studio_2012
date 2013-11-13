//#include "My Tutorials.h"
//Tutorials::Tutorials()
//{
//	cout << " - This is a tutorial program that holds tutorials and help on coding - " << endl;
//	cout << " - Look at the actual code, and comments while running a part of the code - " <<endl;
//	cout << " - Current Issues...  " << endl;
//	cout << " - Tic Tac Toe occasionally has some logic issues... probably wont ever be fixed\n " << endl;
//	cout << " - POINTERS NEED FINISHING\n";
//
//}
//
//
//Tutorials::~Tutorials()
//{
//	cout << "Deleting Tutorial Object" << endl;
//	system("pause");
//}
//
//
//void Tutorials::begin()
//{
//	cout << "---THESE ARE EXERCISES FROM THE BOOK---\n - 'BEGGINING C++ THROUGH GAME PROGRAMMING'-\n" << endl;
//	cout << "-Playing with strings = 0" << endl;
//	cout << "-Tic Tac Toe - multidimensional arrays ( mainly strings/chars)  = 1 " << endl;
//	cout << "-Word Jumble - Multidimensional arrays = 2" << endl;
//	cout << "-Standard Template Library - Iterators = 3" << endl;
//	cout << "-Functions - 4" << endl;
//	cout << "-References ( With tic tac toe ) = 5\n";
//	cout << "-Enumurations = 6\n";
//	cout << "-Standard Template Library Algorithms = 7\n";
//	cout << "-Pointers = 8\n";
//	cout << "Enter a number for the specific part" << endl;
//}
//
//
//void Tutorials::playingWithStrings()
//{
//	// PLAYING WITH STRINGS!//////////////////////////////////////////////////
//
//	// REMEMBER TO INCLUDE STRING -- #include <string>
//
//	// STRINGS ARE ACTUALLY OBJECTS! SO IF YOU CREATE A STRING, IT COMES WITH METHODS THAT CAN BE USED TO MANIPULATE THEM.
//	// FOR EXAMPLE. STRING NAME.SIZE()
//					
//	string banana("banana");//two different ways of declaring a variable.
//	string and("and");
//	string apple = "apple";
//	
//	cout << " THE SIZE OF THE STRING APPLE SHOULD BE 5" << endl;
//	cout << " THE SIZE IS :" << apple.size()  << endl;
//
//	string sentence = banana + " " + and + " " + apple; // This groups words together 
//	cout << " " << endl;
//
//	cout << sentence << endl;
//	cout << " "<< endl;
//	
//	cout << " THE CHARACTER AT POSITION 0 IS " << " :" << sentence[0] << endl;
//	cout << " THE CHARACTER AT POSITION 3 IS "<< " : " << sentence[3] << endl;
//	
//	int stringSize = sentence.size();
//	for(int i=0;i<stringSize;i++)
//	{
//		cout << sentence[i] << endl;
//	}
//
//	// NOW TO REASSIGN A LETTER IN THE SENTENCE
//	cout << "// NOW TO REASSIGN A LETTER IN THE SENTENCE TO 2" << endl;
//	cout << "// sentence[5]= '2';" << endl;
//
//	sentence[5]= '2';
//
//	stringSize = sentence.size();
//	for(int i=0;i<stringSize;i++)
//	{
//		cout << sentence[i] << endl;
//	}
//
//	cout << "THE SIZE OF THE SENTENCE STRING IS" << " " << stringSize << endl;
//	cout << " THE WORD APPLE IS AT " << sentence.find("apple") << endl;
//
//	const int MAX_ITEMS = 10;
//	string inventory[MAX_ITEMS];// CREATING AN ARRAY OF STRINGS THE SIZE OF MAX_ITEMS;
//
//	int numItems=0;//declaring a variable to let me go forward through the array and set things.
//	inventory[numItems++]="sword";//this sets sword in part '0' of the inventory array and then increments numItems by 1. 
//
//	// note the ++ AFTER the numItems.. not before. If they were BEFORE.. for example [++numItems]... it would increment numItems BEFORE setting
//	// as sword.
//
//	inventory[numItems++]="shield";
//	inventory[numItems++]="armor";
//	
//	//outputs all the values in the array.
//	for(int i=0;i<MAX_ITEMS;i++)
//	{
//		cout << inventory[i] << endl;
//	}
//
//	cout << " THE HERO DROPS HIS SWORD AND PICKS UP A BATTLEAXE" << endl;
//
//	// CHANGING SWORD FOR AN BATTLE AXE
//	inventory[0] = "Battle Axe";
//	cout << inventory[0] << endl;
//	cout << inventory[0].size() << " " << "letters in inventory[0]" << endl;
//
//	if(numItems<MAX_ITEMS)
//	{
//		inventory[numItems++]= "Healing Potion";
//	}
//	else
//		cout << " You inventory is full " <<endl;
//
//	//MULTIDIMENSIONAL ARRAYS
//
//	//TIC-TAC-TOE 
//	const int ROWS = 3;
//	const int COLUMNS = 3;
//
//	char board[ROWS][COLUMNS] = { {'O','X','O'},
//								  {' ','X','O'},
//								  {'X','O','O'} };
//	for(int i=0;i<ROWS;i++)
//	{
//		for(int j=0;j<COLUMNS;j++)
//		
//			cout << board[i][j];
//			cout << endl;
//		
//	}
//
//	cout<< endl;
//	cout << " INSERTING AN X INTO THE POSIITON [1,0]" << endl;
//
//	board[1][0] = 'X';
//
//
//	cout << " HERE IS THE NEW BOARD " << endl;
//
//	for(int i=0;i<ROWS;i++)
//	{
//		for(int j=0;j<COLUMNS;j++)
//		
//			cout << board[i][j];
//			cout << endl;
//	}
//}
//
//
//void Tutorials::ticTacToe()
//{
//	int turnCounter =0;
//	bool won = false;
//	bool draw = false;
//	int row1choice = 0;
//	int row2choice = 0;
//	bool first= false;
//
////Create the gameboard using 2d ARRAY and initialise the gameboard to empty spaces.
//	const int ROW = 3;
//	const int COLUMN = 3;
//	char gameBoard[ROW][COLUMN] = { {'*','*','*'},
//								  {'*','*','*'},
//								  {'*','*','*'} };
//	//If a winner hasnt been decided
//		//if winning conditions havent been met
//		
//				//Tell that player 1 is X and player 2 is O
//	cout << " PLAYER 1 is X and PLAYER 2 is O " << endl;
//	cout << endl;
//
//	cout << "THIS IS THE GAMEBOARD" << endl;
//	cout << endl;
//
//		for(int i=0;i<ROW;i++)
//			{
//			for(int j=0;j<COLUMN;j++)
//		
//			cout << gameBoard[i][j];
//			cout << endl;
//			}
//
//	while(won==false && draw==false)
//	{
//	
//		while(won==false && draw==false)
//		{
//			cout << "PLAYER 1, INDICATE WHERE YOU WANT TO PUT YOUR X BY TYPING THE NUMBER OF THE ROW" << endl;
//			cout << "THEN PRESS ENTER AND TYPE IN THE COLUMN" << endl;
//			cout << "row :";
//			cin >> row1choice;
//			cout << "Column :";
//			cin >> row2choice;
//	
//			--row1choice;
//			--row2choice;
//
//			if(gameBoard[row1choice][row2choice] != '*')
//				{
//				cout << " ALREADY TAKEN " << endl;
//				}
//			else break;
//		}
//
//	gameBoard[row1choice][row2choice] = 'X';
//	turnCounter++;
//	
//	if(turnCounter == 9)
//	{
//		cout << " THE GAME IS A DRAW " << endl;
//		draw=true;
//	}
//
//	if((gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X' )|| //CHECKS DOWNWARDS X's
//			(gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') || // CHECKS DOWNWARDS X's
//			gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X' || // CHECKS DOWNWARDS X's
//			
//			gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X' || //CHECKS ACROSS X's
//			gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X' ||
//			gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X' ||
//
//			gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X' ||
//			gameBoard[2][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[0][2] == 'X' )
//	{
//			cout << "PLAYER 1 HAS WON" << endl;
//			won=true;
//	}
//
//	else if((gameBoard[0][0] == 'Y' && gameBoard[0][1] == 'Y' && gameBoard[0][2] == 'Y' )|| //CHECKS DOWNWARDS Y's
//			(gameBoard[1][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[1][2] == 'Y') || // CHECKS DOWNWARDS Y's
//			gameBoard[2][0] == 'Y' && gameBoard[2][1] == 'Y' && gameBoard[2][2] == 'Y' || // CHECKS DOWNWARDS Y's
//			
//			gameBoard[0][0] == 'Y' && gameBoard[1][0] == 'Y' && gameBoard[2][0] == 'Y' || //CHECKS ACROSS Y's
//			gameBoard[0][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[2][1] == 'Y' ||
//			gameBoard[0][2] == 'Y' && gameBoard[1][2] == 'Y' && gameBoard[2][2] == 'Y' ||
//
//			gameBoard[0][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[2][2] == 'Y' ||
//			gameBoard[2][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[0][2] == 'Y' )
//	{
//			cout << "PLAYER 2 HAS WON" << endl;
//			won=true;
//	}
//
//	if(won==false && draw==false)
//	{
//	cout << endl;
//	cout << endl;
//	cout << " THIS IS THE NEW GAMEBOARD " << endl;
//	cout << endl;
//	
//
//	for(int i=0;i<ROW;i++)
//			{
//			for(int j=0;j<COLUMN;j++)
//		
//			cout << " " << gameBoard[i][j];
//			cout << endl;
//			}
//
//	}
//	while(won==false && draw==false)
//		{
//			cout << "PLAYER 2, INDICATE WHERE YOU WANT TO PUT YOUR X BY TYPING THE NUMBER OF THE ROW" << endl;
//			cout << "THEN PRESS ENTER AND TYPE IN THE COLUMN" << endl;
//			cout << "row :";
//			cin >> row1choice;
//			cout << "Column :";
//			cin >> row2choice;
//
//			--row1choice;
//			--row2choice;
//
//			if(gameBoard[row1choice][row2choice] != '*')
//				{
//				cout << " ALREADY TAKEN " << endl;
//				}
//			else break;
//		}
//	
//	gameBoard[row1choice][row2choice] = 'Y';
//	turnCounter++;
//	cout << turnCounter;
//
//    if(won==false && draw==false)
//	{
//	cout << endl;
//	cout << endl;
//	cout << " THIS IS THE NEW GAMEBOARD " << endl;
//	cout << endl;
//	
//	for(int i=0;i<ROW;i++)
//			{
//			for(int j=0;j<COLUMN;j++)
//		
//			cout << " " << gameBoard[i][j];
//			cout << endl;
//			}
//	}
//
//	if((gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X' )|| //CHECKS DOWNWARDS X's
//			(gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X') || // CHECKS DOWNWARDS X's
//			gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X' || // CHECKS DOWNWARDS X's
//			
//			gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X' || //CHECKS ACROSS X's
//			gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X' ||
//			gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X' ||
//
//			gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X' ||
//			gameBoard[2][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[0][2] == 'X' )
//	{
//			cout << "PLAYER 1 HAS WON" << endl;
//			won=true;
//	}
//
//	else if((gameBoard[0][0] == 'Y' && gameBoard[0][1] == 'Y' && gameBoard[0][2] == 'Y' )|| //CHECKS DOWNWARDS Y's
//			(gameBoard[1][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[1][2] == 'Y') || // CHECKS DOWNWARDS Y's
//			gameBoard[2][0] == 'Y' && gameBoard[2][1] == 'Y' && gameBoard[2][2] == 'Y' || // CHECKS DOWNWARDS Y's
//			
//			gameBoard[0][0] == 'Y' && gameBoard[1][0] == 'Y' && gameBoard[2][0] == 'Y' || //CHECKS ACROSS Y's
//			gameBoard[0][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[2][1] == 'Y' ||
//			gameBoard[0][2] == 'Y' && gameBoard[1][2] == 'Y' && gameBoard[2][2] == 'Y' ||
//
//			gameBoard[0][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[2][2] == 'Y' ||
//			gameBoard[2][0] == 'Y' && gameBoard[1][1] == 'Y' && gameBoard[0][2] == 'Y' )
//	{
//			cout << "PLAYER 2 HAS WON" << endl;
//			won=true;
//	}
//		
//	}
//
//	cout <<" GAME HAS FINISHED!" << endl;
//
//	cout << " THE FINAL GAME BOARD LOOKS LIKE.. : " << endl;
//	for(int i=0;i<ROW;i++)
//			{
//			for(int j=0;j<COLUMN;j++)
//		
//			cout << " " << gameBoard[i][j];
//			cout << endl;
//			}
//
//}
//
//
//void Tutorials::wordJumble()
//{
//    enum fields {WORD, HINT, NUM_FIELDS};
//    const int NUM_WORDS = 5;
//    const string WORDS[NUM_WORDS][NUM_FIELDS] =
//    {
//        {"wall", "Do you feel you're banging your head against something?"},
//        {"glasses", "These might help you see the answer."},
//        {"labored", "Going slowly, is it?"},
//        {"persistent", "Keep at it."},
//        {"jumble", "It's what the game is all about."}
//    };
//
//  	srand(time(0));
//	int choice = (rand() % NUM_WORDS);
//    string theWord = WORDS[choice][WORD];  // word to guess
//    string theHint = WORDS[choice][HINT];  // hint for word
//
//    string jumble = theWord;  // jumbled version of word
//    int length = jumble.size();
//    for (int i=0; i<length; ++i)
//    {
//        int index1 = (rand() % length);
//        int index2 = (rand() % length);
//        char temp = jumble[index1];
//        jumble[index1] = jumble[index2];
//        jumble[index2] = temp;
//    }
//
//    cout << "\t\t\tWelcome to Word Jumble!\n\n";
//    cout << "Unscramble the letters to make a word.\n";
//    cout << "Enter 'hint' for a hint.\n";
//    cout << "Enter 'quit' to quit the game.\n\n";
//    cout << "The jumble is: " << jumble;
//
//    string guess;
//    cout << "\n\nYour guess: ";
//    cin >> guess;
//
//    while ((guess != theWord) && (guess != "quit"))
//    {
//        if (guess == "hint")
//            cout << theHint;
//        else
//            cout << "Sorry, that's not it.";
//
//        cout <<"\n\nYour guess: ";
//        cin >> guess;
//    }
//
//    if (guess == theWord)
//        cout << "\nThat's it!  You guessed it!\n";
//
//    cout << "\nThanks for playing.\n";
//
//}
//
//
//void Tutorials::iterators()
//{
//	cout << "\n";
//	cout << " To create an iterator of your own  write the container type," << endl;
//	cout << "followed by the type of objects it will hold," << endl;
//	cout << "surrounded by < and > symbols, followed by the scope resolution operator ( :: )," << endl;
//	cout << "followed by 'iterator, "<< endl;
//	cout << "followed by the name you want to give the iterator" << endl;
//	cout << " ";
//	
//	
//
//	vector<string> inventory; //creating a vector of strings for the inventory
//	inventory.push_back("sword");
//	inventory.push_back("armor");
//	inventory.push_back("shield");
//	vector<string>::iterator myIterator;// creates an iterator
//	vector<string>::const_iterator Iter;//creates a constant interator 
//
//	cout << "your items" << endl;
//
//	for(Iter = inventory.begin(); Iter != inventory.end(); ++Iter)// For iter to be 0 ( inventory.begin() ) 
//	{
//		cout << *Iter << endl;
//	}
//	
//	cout << " You Trade your sword for a battle axe " << endl;
//	myIterator = inventory.begin();
//	*myIterator = "battle axe";
//	cout << "your items" << endl;
//
//	for(Iter = inventory.begin(); Iter != inventory.end(); Iter++)
//	{
//		cout << *Iter << endl;
//	}
//
//	cout << "\n The item name ' " << *myIterator << "'has ";
//	cout << (*myIterator).size() << " letters in it.\n" << endl;
//
//	*myIterator++;
//	cout << *myIterator << endl;
//
//	// Extract from "beetlerun" code ----------------------
//	
//	/*
//	-
//	for(vector<Block*>::iterator it = blockVec.begin(); it != blockVec.end(); it++)
//	{
//		Player1->collidesWithBlock(*it);
//	}
//	-
//
//	*/
//
//
//
//}
//
//
//void Tutorials::blackJack()
//{
//	cout << "This is about Inheritance and polymorphism. It covers how to... "<< endl;
//	cout << " - derive one class from another" << endl;
//	cout << " - Use Inherited data members and member functions " << endl;
//	cout << " - Override base class member functions " << endl;
//	cout << " - Declare pure virtual functions to define abstract classes" << endl;
//	cout << endl;
//	cout << "These are in the Header file 'Chapter ten- Blackjack' and the cpp 'Chapter Ten - Blackjack' and ' Blackjack Main ' " << endl;
//}
//
//
//void Tutorials::references()
//{
//	// THIS NEEDS FINISHING.
//
//	cout << " This section covers References and also has a game of Tic Tac Toe with a slight bit of AI\n";
//	cout << " THIS SECTION IS IMCOMPLETE\n";
//	int myScore = 1000;
//	int& mikesScore = myScore; //Creates a reference 
//
//	cout << "myScore is" << myScore<< "\n";
//	cout << "mikesScore is" << mikesScore<< "\n";
//
//	cout << " Adding 500 to myScore " << endl;
//	myScore +=500; // is the same as myScore = myScore + 500;
//	cout << "myScore is" <<myScore << endl;
//	cout << "mikesScore is" << mikesScore << endl;
//
//	cout << "Adding 500 to mikesScore" << endl;
//	mikesScore +=500;
//	cout << "myScore is " << myScore << endl;
//	cout << "mikesScore is" << mikesScore<<endl;
//	
//	myScore = 150;
//	int yourScore = 1000;
//
//	cout << "Original Values\n";
//	cout <<"myScore " << myScore << "\n";
//	cout <<"yourScore: " << yourScore << "\n\n";
//	
//	cout <<"Calling badSwap()\n";
//	badSwap(myScore,yourScore);
//	cout <<"myScore: "<< myScore << "\n";
//	cout <<"yourScore: " << yourScore << "\n\n";
//
//	cout <<"Calling goodSwap() which is passing a reference of the argument variable\n";
//	goodSwap(myScore,yourScore);
//	cout <<"myScore: "<< myScore << "\n";
//	cout <<"yourScore: " << yourScore << "\n\n";
//
//
//	vector<string> inventory;
//	inventory.push_back("Sword");
//	inventory.push_back("Axe");
//	inventory.push_back("Shield");
//
//	displayVector(inventory);
//	
//	vector<string> words;
//	words.push_back("kite");
//	words.push_back("bike");
//	words.push_back("apple");
//	
//	displayVector(words);
//
//	cout << "Sending the returned reference to cout: \n";
//	cout << refToElement(inventory,2);
//
//	//assigns one reference to another -- inexpensive assignment 
//    cout << "Assigning the returned reference to another reference.\n";
//    string& rStr = refToElement(inventory, 1); 
//    cout << "Sending the new reference to cout:\n";
//    cout << rStr << "\n\n";
//
//    //copies a string object -- expensive assignment
//    cout << "Assigning the returned reference to a string object.\n";
//    string str = refToElement(inventory, 2);
//    cout << "Sending the new string object to cout:\n";
//    cout << str << "\n\n";
//    
//    //altering the string object through a returned reference
//    cout << "Altering an object through a returned reference.\n";
//    rStr = "Healing Potion";
//    cout << "Sending the altered object to cout:\n";
//    cout << inventory[1] << endl;
//	
//	/* TIC TAC TOE */
//	
//	const char X = 'X';
//	const char O = 'O';
//	const char EMPTY = ' ';
//	const char TIE = 'T';
//	const char NO_ONE = 'N';
//	
//	int move;
//	const int NUM_SQUARES = 9;
//	vector<char> board(NUM_SQUARES,EMPTY);
//	ticTacToeInstructions();
//	char human = humanPiece();
//	char computer = opponent(human);
//	char turn = 'X';
//	
//	while(winner(board,EMPTY,TIE,NO_ONE) == NO_ONE)
//	{
//		if(turn == human)
//		{
//			move = humanMove(board,human);
//			board[move] = human;
//		}
//		else
//		{
//			move = computerMove(board,computer,EMPTY,TIE,NO_ONE);
//			board[move] = computer;
//		}
//		displayBoard(board);
//		turn = opponent(turn);
//	}
//	announceWinner(winner(board,EMPTY,TIE,NO_ONE), computer, human);
//}
//
//
//void Tutorials::pointers()
//{
//	//A pointer is a variable that can contain a memory address. Pointers gives you the ability to work with directly
//	//and efficiently with computer memory. 
//
//
//	printf("A pointer is a variable that can contain a memory address.\nPointers give you the ability to work directly\nand efficiently with computer memory.\n");
//	
//
//	int* pPointer = NULL;//initialising a pointer to NULL *or  0 
//	int* pScore = 0;//initialising a pointer to NULL *or  0 
//	
//	int score = 1000;
//	pScore = &score; // The & is used so the pointer gets the ADDRESS of score, not the variable of score itself
//
//
//	cout << *pScore << endl;
//	cout << "Assigning &score to pScore\n";
//	cout << "&score is: " << &score << "\n";// using & in a cout statement displays the address.
//	cout << "pScore is: " << pScore << "\n";
//	cout << "score is : " << score << endl;
//	cout << "*pScore is: " << *pScore << "\n\n"; //*pScore means "The object to which pScore points"
//
//	printf("Adding 500 to score\n");
//	score += 500;
//	cout << "score is: " << score << endl;
//	cout << "*pScore is: " << *pScore <<"\n\n";
//
//	cout << "Adding 500 to *pScore\n";
//	*pScore += 500;
//	cout << "score is: " << score << endl;
//	cout << "*pScore is: " << *pScore <<"\n\n";
//
//	cout << "Assigning &newScore to pScore" << endl;
//	int newScore = 500;
//	pScore = &newScore;
//	cout << "&newScore is: " << &newScore <<endl;
//	cout << "pScore is: " << pScore << endl;
//	cout << "newScore is: " << newScore << endl;
//	cout << "*pScore is: " << *pScore << "\n\n";
//
//	string str = "score";
//	string* pStr = &str; // pointer to a string OBJECT;
//
//	cout << "*pStr is: " << *pStr << "\n";  //*pStor means "The object to which pScore points"
//	cout << "(*pStr).size() is: " << (*pStr).size() << "\n"; // The (*pStr) deferences the pointer first 
//																  // before being able to access member functions.
//
//	cout << "pStr->size() is: " << pStr->size() << "\n\n";// can also be used to get string size from pointer.
//
//
//	
//	int highScore = 100;
//
//	cout << "By using the const keyword AFTER the type when initializing a pointer,\nyou can restrict the pointer so it can only point to the object\nit is initialized to.\n\n";
//	//constant pointer - a pointer that can only point to one thing and one thing only. 
//	int* const pHighScore = &highScore;
//
//	cout << "By using the const keyword BEFORE the type when initializing a pointer,\nyou can restrict the pointer so that cant change the variable it's pointing to.\n\n";
//	//pointer to a constant - a pointer that cant change the variable its pointing to.
//	const int* pNumber; // a pointer to a constant 
//
//	int lives = 3;
//	pNumber= &lives;
//	// pNumber is a pointer to a constant, meaning that *pNumber -= 1;  would be illegal.
//	
//	//pNumber can still change though..
//	int newNumber = 5;
//	pNumber = &newNumber; //... is fine.
//	
//	int BONUS = 192;
//	cout << "By using the const keyword BEFORE AND AFTER the type when initializing a pointer,the pointer can only point to the object it was initialized with\naswell as not having the ability to change the variable its pointing to.\n\n";
//	const int* const pBONUS = &BONUS;
//
//	int myScore = 150;
//	int yourScore = 1000;
//	cout << "myScore is: " << myScore << "\n";
//	cout << "yourScore is: " << yourScore << "\n\n";
//	cout << "calling goodSwap\n\n";
//	goodSwap(&myScore,&yourScore); // use & to pass addresses to a function
//
//	cout << "myScore is: " << myScore << "\n";
//	cout << "yourScore is: " << yourScore << "\n\n";
//
//
//	int test = 123456789;
//	const int* aPointer = &test;
//
//	aPointer = &test;
//	aPointer = &myScore;
//	
//	cout << aPointer << *aPointer << &aPointer << "\n\n";
//
//
//	vector<string>inventory;
//	inventory.push_back("sword");
//	inventory.push_back("armor");
//	inventory.push_back("shield");
//
//	//displays string object that the returned pointer points to
//	cout << "sending the objected pointed to by returned pointer: \n";
//	cout << *(ptrToElement(&inventory,0)) << "\n\n";
//
//	//assigns one pointer to another - inexpensive assignment
//	cout << "Assigning the returned pointer to another pointer \n";
//	pStr =  ptrToElement(&inventory,1);
//	cout << "Sending the object pointed to by new pointer to cout: \n";
//	cout << *pStr << "\n\n";
//
//	//copies a string object - Expensive argument
//	cout << "Assinging the returned pointer to a string object\n";
//	str = *(ptrToElement(&inventory,2));
//	cout << str;
//
//	*pStr = "Healing Potion"; // This points to the 2nd element in an array. ( Because of  'pStr =  ptrToElement(&inventory,1);' which returns one pointer to another. 
//
//	// The Array passer program.
//	cout << "Creating an array of high scores. \n\n";
//	const int NUM_SCORES = 3;
//	int highScoresArray[NUM_SCORES] = {5000,3500,2700};
//
//	cout << "Displaying scores using array name as a constant pointer\n";
//	cout << *highScoresArray << endl;
//	cout << *(highScoresArray + 1) << endl;
//	cout << *(highScoresArray + 2) << endl;
//	
//	cout << "Increasing scores by passing array as a constant pointer\n\n" << endl;
//	increase(highScoresArray,NUM_SCORES);
//	cout << "Displaying scores by passing array as a constant pointer to a constant\n";
//	displayArray(highScoresArray,NUM_SCORES);
//
//}
//
//
//
//void Tutorials::extraStuff()
//{
//	bool nottrue = 0;
//	bool istrue=1;
//
//	//This wont actually display anything because the else part of this 
//	//statement correspondes to the last known if statement, so in this case, 'if(istrue)'
//
//	if(nottrue)// isnt true,  so moves on
//		if(istrue) //because the top if statement wasnt true, this doesnt get executed, but, this statement still values as "true", so the else statement doesnt get executed. 
//			cout << "This will never be displayed" << endl;
//
//		else
//			cout << "this will always be displayed ( But not this time because of logic ) " << endl;
//
//
//	/*---------------------This can be fixed by using {} -----------------------*/
//
//	if(nottrue)
//	{
//		if(istrue)
//			cout << "This will never be displayed" << endl;
//	}
//		else 
//			cout << "This will always be displayed" << endl;
//
//
//}
//
//
//void Tutorials::enumuration()
//{
//	//needs expanding
//
//	////Rewrote Menu chooser code with enums incuded --------------------------------
//
//enum Menu{EASY=1,MEDIUM,HARD};
//cout << "Choose your difficulty level\n\n";
//cout << "1-Easy\n";
//cout << "2-Normal\n";
//cout << "3-Hard\n";
//
//int choice;
//cin>>choice;
//switch(choice)
//{
//case EASY:
//	cout << "Easy\n";
//	break;
//case MEDIUM:
//	cout << "MEDIUM\n";
//	break;
//case HARD:
//	cout << "HARD\n";
//	break;
//}
//}
//
//
//void Tutorials::standardTemplateLibraryAlgorithms()
//{
// //Algorithms  exist for common tasks such as searching, randomizing and sorting.
//
//// NOTE - THIS USES #include <algorithm>.
//	cout << " NOTE --- THIS USES #include <algorithm>\n";
//	int number;
//
//
//	vector<int>scores; 
//	for(int i =0; i <= 10; i++)
//	{
//		scores.push_back(i);
//	}
//
//	vector<int>::iterator scoresIter;
//
//	cout << " Enter a number to find from 0-10 " << endl;
//	cin >> number;
//	scoresIter = find(scores.begin(),scores.end(), number);
//	//if the iteration doesnt equal the end of the score, then the score has been found
//	//else 
//
//	if(scoresIter != scores.end())
//	{
//		cout << " score found " << endl;
//	}
//	else 
//		cout << " score not found " << endl;
//
//
//	//RANDOMISATION ALGORITHM
//	cout << " randomising scores " << endl;
//	srand(time(0));	//SEEDS A RANDOM NUMBER WHICH 'RANDOM SHUFFLE' USES
//	random_shuffle(scores.begin(), scores.end());
//	cout << "\n High Scores \n";
//	for(scoresIter = scores.begin(); scoresIter != scores.end(); ++scoresIter)
//		cout << *scoresIter<< endl; // WE USE * IN FRONT OF THE ITERATOR AS  WE DISPLAY THE VALUE OF THE ELEMENT TO WHICH THE ITERATOR REFERS
//									//( NOT THE ITERATOR ITSELF )
//
//
//	//SORTING ALGORITHM
//	cout << " Sorting Scores " << endl;
//
//	sort(scores.begin(), scores.end());
//	cout << "\n High Scores \n";
//	for(scoresIter = scores.begin(); scoresIter != scores.end(); ++scoresIter)
//		cout << *scoresIter << endl;
//
//
//	
//	//HANGMAN
//
//	const int MAX_WRONG = 8;
//	vector<string> words;
//	words.push_back("KIERRA");
//	words.push_back("SPAIN");
//	words.push_back("HARLEY");
//
//	srand(time(0));
//	random_shuffle(words.begin(),words.end());
//	const string THE_WORD = words[0];
//
//	int wrong= 0;
//	string soFar(THE_WORD.size(), '-');
//	string used = "";
//
//	while((wrong < MAX_WRONG) && (soFar != THE_WORD))
//	{
//		cout << "\n\n You have " << MAX_WRONG - wrong << " guesses left.\n" << endl;
//		cout << "\nYou've used the following letters: \n" << used << endl;
//		cout << "\nSo far, the word is: \n" << soFar << endl;
//
//		char guess;
//		cout << "\n\nEnter your guess : ";
//		cin >> guess;
//		guess=toupper(guess);//makes the guess character uppercase
//		while(used.find(guess) != string::npos)
//		{
//			cout << "You've already guessed " << guess << endl;
//			cout << "Enter your guess :" <<endl;
//			cin>>guess;
//			guess=toupper(guess);
//		}
//		used+= guess;
//
//		if(THE_WORD.find(guess) != string::npos)
//		{
//			cout << "THATS RIGHT! "<< guess<< " is in the word.\n";
//			
//			//update soFar to include newly guessed letter
//			for(int i = 0; i < THE_WORD.length(); ++i)
//			{
//				if(THE_WORD[i]==guess)
//				{
//					soFar[i] = guess;
//				}
//			}
//
//		}
//		else
//		{
//			cout << "Sorry, " << guess << " isnt in the word\n";
//			++wrong;
//		}
//	}
//
//
//	if(wrong==MAX_WRONG)
//		cout << "You've Been Hanged." << endl;
//	else 
//		cout << "You guessed it" << endl;
//	
//	cout << "The word was " << THE_WORD<< endl;
//}
//
//void Tutorials::functions()
//{
//	cout << "This section contains functions that can be found in the MY TUTORIALS class\n";
//	cout << "This section also covers other subjects... \n";
//	cout << "Subjects covered - Scopes , \n\n";
//	int var = 5; // local variable in functions() -  * doesnt exist in int main() * 
//	cout <<  "In functions(), var is: " << var << endl;
//
//	func();
//
//	cout << "Back in functions(), var is: " << var << "\n\n";
//
//	cout << "A NEW SCOPE IS CREATED USING {} \n" << endl;
//	{
//		cout << "In functions(), in a new scope, var is: " << var << endl;
//		cout << "Creating a new 'var' in the new scope\n" << endl;
//		int var = 10; // variable in new scope, which HIDES other variables named the same ( var in this case )
//		cout << "In functions(), in a new scope, var is: " << var << "\n\n";
//	}
//
//	cout << "At the end of functions(), var created in the new scope no longer exists.\n";
//	cout << "At the end of functions(), var is: " << var << "\n\n\n";
//
//	int number = askNumber(5);
//	cout << "Thanks for entering: " << number << "\n\n";
//
//	number = askNumber(10,5);
//	cout << "Thanks for entering: " << number << "\n\n";
//
//
//	cout << "Overloaded functions -  have multiple argument types\n\n";
//	
//	cout << "Tripling 5 : " << triple(5) << "\n\n";
//	cout << "Tripling 'Word' : " << triple("word") << "\n\n;";
//	
//}
//
//
////THESE FUNCTIONS ARE FOR CHAPTER 5 - FUNCTIONS ---------------------------------------------------------
//void Tutorials::func()
//{
//	int var = -5;
//	cout << "In func(), var is: " << var << endl;
//}
//
//int Tutorials::askNumber(int high, int low)
//{
//	int num;
//	
//	do
//	{
//		cout << "Please enter a number" << " (" << low << " - " << high << "): " ;
//		cin>>num;
//	} while(num>high || num<low);
//
//
//	return num;
//}
//
//int Tutorials::triple(int number)
//{
//	return (number*3);
//}
//
//string Tutorials::triple(string word)
//{
//	return (word+word+word);
//}
//
////inlined function explained in "My tutorials header class"
//inline int Tutorials::inlinedFunction(int num)
//{
//	return num;
//}
////-------------------------------------------------------------------------------------------------------
//
////THESE FUNCTIONS ARE FOR CHAPTER 6 - REFERENCES --------------------------------------------------------
//
//void Tutorials::badSwap(int x,int y)
//{
//	int temp = x;
//	x=y;
//	y = temp;
//}
//
//void Tutorials::goodSwap(int& x,int& y)
//{
//	int temp = x;
//	x=y;
//	y = temp;
//}
//
//string& Tutorials::refToElement(vector<string>& inventory, int i)
//{
//	return inventory[i];
//}
//
//void Tutorials::ticTacToeInstructions()
//{
//	cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe.\n";
//    cout << "--where human brain is pit against silicon processor\n\n";
//
//    cout << "Make your move known by entering a number, 0 - 8.  The number\n";
//    cout << "corresponds to the desired board position, as illustrated:\n\n";
//    
//    cout << "       0 | 1 | 2\n";
//    cout << "       ---------\n";
//    cout << "       3 | 4 | 5\n";
//    cout << "       ---------\n";
//    cout << "       6 | 7 | 8\n\n";
//
//    cout << "Prepare yourself, human.  The battle is about to begin.\n\n";
//}
//
//char Tutorials::humanPiece()
//{
//	char goFirst = askYesNo("Do you require the first move?");
//	if(goFirst == 'Y')
//	{
//		cout<< " You will need this first turn, petty human ";
//		return 'X';
//	}
//	else 
//	{ 
//		cout<< " Your brave human... i shall go first "; 
//		return 'O';
//	}
//}
//
//char Tutorials::askYesNo(string question)
//{
//	char response; 
//	do
//	{
//		cout << question << "(Y/N): ";
//		cin >> response;
//	} while (response!= 'Y' && response != 'N');
//	return response;
//}
//
//int Tutorials::askNumberTicTac(string question, int high, int low)
//{
//	int number;
//	do
//	{
//		cout << question << " (" << low << "-" << high << "): ";
//		cin >> number;
//	}  while(number > high || number < low);
//	return number;
//}
//
//char Tutorials::opponent(char piece)
//{
//    if (piece == 'X')
//        return 'O';
//    else
//        return 'X';
//}
//
//void Tutorials::displayBoard(const vector<char>& board)
//{
//	cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
//    cout << "\n\t" << "---------";
//    cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
//    cout << "\n\t" << "---------";
//    cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8];
//    cout << "\n\n";
//}
//
//char Tutorials::winner(const vector<char>& board,char EMPTY, char TIE,char NO_ONE)
//{
//    // all possible winning rows
//    const int WINNING_ROWS[8][3] = { {0, 1, 2},
//                                     {3, 4, 5},
//                                     {6, 7, 8},
//                                     {0, 3, 6},
//                                     {1, 4, 7},
//                                     {2, 5, 8},
//                                     {0, 4, 8},
//                                     {2, 4, 6} };
//    const int TOTAL_ROWS = 8;
//
//    // if any winning row has three values that are the same (and not EMPTY),
//    // then we have a winner
//    for(int row = 0; row < TOTAL_ROWS; ++row)
//    {
//        if ( (board[WINNING_ROWS[row][0]] != EMPTY) &&
//             (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
//             (board[WINNING_ROWS[row][1]] == board[WINNING_ROWS[row][2]]) )
//        {
//            return board[WINNING_ROWS[row][0]];
//        }
//    }
//
//    // since nobody has won, check for a tie (no empty squares left)
//    if (count(board.begin(), board.end(), EMPTY) == 0)
//        return TIE;
//
//    // since nobody has won and it isn't a tie, the game ain't over
//    return NO_ONE;
//}
//
//int Tutorials::humanMove(const vector<char>& board, char human)
//{
//    int move = askNumberTicTac("Where will you move?", (board.size() - 1));
//    while (!isLegal(board,move,' '))
//    {
//        cout << "\nThat square is already occupied, foolish human.\n";
//        move = askNumberTicTac("Where will you move?", (board.size() - 1));
//    }
//    cout << "Fine...\n";
//    return move;
//}
//
//inline bool Tutorials::isLegal(const vector<char>& board,int move,const char EMPTY)
//{
//    return (board[move] == EMPTY);
//}
//
//int Tutorials::computerMove(vector<char> board, char computer,char EMPTY,char TIE,char NO_ONE)
//{
//    cout << "I shall take square number ";
//    
//    // if computer can win on next move, make that move
//    for(int move = 0; move < board.size(); ++move)
//    {
//        if (isLegal(board, move,EMPTY))
//        {
//            board[move] = computer;
//            if (winner(board,EMPTY,TIE,NO_ONE) == computer)
//            {
//                cout << move << endl;
//                return move;
//            }
//            // done checking this move, undo it
//            board[move] = EMPTY;
//        }
//    }
//        
//    // if human can win on next move, block that move
//    char human = opponent(computer);
//    for(int move = 0; move < board.size(); ++move)
//    {
//        if (isLegal(board, move,EMPTY))
//        {
//            board[move] = human;
//            if (winner(board,EMPTY,TIE,NO_ONE) == human)
//            {
//                cout << move << endl;
//                return move;
//            }
//            // done checking this move, undo it
//            board[move] = EMPTY;
//        }
//    }
//
//    // the best moves to make, in order
//    const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
//    // since no one can win on next move, pick best open square
//    for(int i = 0; i < board.size(); ++i)
//    {
//        int move = BEST_MOVES[i];
//        if (isLegal(board, move,EMPTY))
//        {
//            cout << move << endl;
//            return move;
//        }
//    }
//}
//
//void Tutorials::announceWinner(char winner, char computer, char human)
//{
//	if (winner == computer)
//    {
//        cout << winner << "'s won!\n";
//        cout << "As I predicted, human, I am triumphant once more -- proof\n";
//        cout << "that computers are superior to humans in all regards.\n";
//    }
//
//	else if (winner == human)
//    {
//        cout << winner << "'s won!\n";
//        cout << "No, no!  It cannot be!  Somehow you tricked me, human.\n";
//        cout << "But never again!  I, the computer, so swear it!\n";
//    }
//
//	else
//    {
//        cout << "It's a tie.\n";
//        cout << "You were most lucky, human, and somehow managed to tie me.\n";
//        cout << "Celebrate... for this is the best you will ever achieve.\n";
//	}
//}
//
////-------------------------------------------------------------------------------------------------------
//
//
////THESE FUNCTIONS ARE FOR CHAPTER 7 - POINTERS --------------------------------------------------------
//
//
//void Tutorials::goodSwap(int* const x, int* const y)
//{
//	int temp = *x;
//	*x=*y;
//	*y = temp;
//}
//
//
//string* Tutorials::ptrToElement(vector<string>* pVec,int i)
//{
//	return &((*pVec)[i]);
//}
//
//
//void Tutorials::increase(int* const array, const int NUM_ELEMENTS)
//{
//	//for loop goes through the array, by the number of elements, adds 500 to each element
//	for(int i = 0; i < NUM_ELEMENTS; i++)
//	{
//		array[i] += 500;
//	}
//}
//
//void Tutorials::displayArray(const int* const array, const int NUM_ELEMENTS)
//{
//	for(int i = 0; i < NUM_ELEMENTS; i++)
//	{
//		cout << *(array + i) << "\n";
//	}
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
////Function to display a vector of strings
//void Tutorials::displayVector(const vector<string>& vec)
//{
//	cout << "Your Items:\n";
//	for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << endl;
//	}
//}
//
////Function to display a vector of ints
//void Tutorials::displayVector(const vector<int>& vec)
//{
//	cout << "Your Items:\n";
//	for(vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << endl;
//	}
//}


////Function to display a vector of doubles
//void Tutorials::displayVector(const vector<double>& vec)
//{
//	cout << "Your Items:\n";
//	for(vector<double>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << endl;
//	}
//}
//
////Function to display a vector of char's
//void Tutorials::displayVector(const vector<char>& vec)
//{
//	cout << "Your Items:\n";
//	for(vector<char>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//}
//
////Function to display a vector of floats
//void Tutorials::displayVector(const vector<float>& vec)
//{
//	cout << "Your Items:\n";
//	for(vector<float>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
//	{
//		cout << *iter << " ";
//	}
//}
//
