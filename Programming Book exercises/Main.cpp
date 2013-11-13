//#include <iostream>
//#include<cstdlib>
//#include<ctime> // access functions involving time. 
//#include<vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//void chapter_1();
//void chapter_2();
//void chapter_3();
//void chapter_4();
//void chapter_5();
//
///*chapter 5 functions*/
//char playerGuess();
//
//int getMyNumber(string = "Enter a number");
//int getMyNumber(int number);
//
////-----------------------
//
//void chapter_6();
///*chapter 6 functions*/
//string askText(string prompt);
//int askNumber(string prompt);
//void tellStory(string& name,string& noun,int& number, string& bodyPart,string& verb); 
//
//
//void chapter_7();
///*chapter 7 functions*/
//void pTellStory(string* name, string* noun,int* number, string* bodyPart,string* verb);
//int* pAskNumber(string prompt);
//string* pAskText(string prompt);
//
//
//int main()
//{
//
//
//
//
//
//	chapter_7();
//	system("pause");
//	return 0;
//}
//
//
//void chapter_1()
//{
//	cout << "--------chapter 1---------" << endl;
//	cout << "seven divided by three is " << 7/3 << endl;   // this outputs 2 because its intergral division. 7/3 is 2.3333, but rounds down to 2.
//	cout << "seven divided by three is " << 7.0/3 << endl; // this outputs 2.333333 because its floating point division
//	cout << "seven divided by three is " << 7.0/3.0 << endl;
//
//	// write a program that gets three game scores from the user and displays the average.
//	int score1;
//	int score2;
//	int score3;
//	cout << "enter score 1: " << endl;
//	cin >> score1;
//	cout << "enter score 2: " << endl;
//	cin >> score2;
//	cout << "enter score 3: " << endl;
//	cin >> score3;
//	cout << "\n";
//	cout << "the average of these 3 scores is " << (score1+score2+score3)/3<< endl;
//	//-------------------------------------------------------------------------------------
//}
//
//
//
//void chapter_2()
//{
//	////Rewrite Menu chooser code with enums incuded --------------------------------
//
//	//enum Menu{EASY=1,MEDIUM,HARD};
//	//cout << "Choose your difficulty level\n\n";
//	//cout << "1-Easy\n";
//	//cout << "2-Normal\n";
//	//cout << "3-Hard\n";
//
//	//int choice;
//	//cin>>choice;
//	//switch(choice)
//	//{
//	//case EASY:
//	//	cout << "Easy\n";
//	//	break;
//	//case MEDIUM:
//	//	cout << "MEDIUM\n";
//	//	break;
//	//case HARD:
//	//	cout << "HARD\n";
//	//	break;
//	//}
////---------------------------------------------------
//	
//	//GUESS MY NUMBER ( Computer guesses your number )
//
//// player picks a number between 1 + 100
////the computer gets a random number between 1 + 100;
//// the computer counter starts at 20, , goes down by 1 each guess. 
//// if computer too high, counter decreases guessed number
//// if computer too low, counter increases gussed number.
//
//int userNumber = 0;
//int computerCount = 15;
//int computerGuesses= 0;
//srand(time(0));
//int computerGuess = rand() % 100 + 1;
//cout << " Pick a number for the computer to guess between 1 + 100 \n";
//cin >> userNumber;
//
//while(computerGuess != userNumber)
//{
//	if(computerGuess < userNumber)
//	{
//		cout << " Computer guess is lower\n";
//		computerGuess +=  computerCount;
//		computerCount -= 1;
//		computerGuesses +=1;
//	}
//	else if( computerGuess > userNumber)
//	{
//		cout << " computer guess is higher\n";
//		computerGuess -= computerCount;
//		computerCount -= 1;
//		computerGuesses +=1;
//	}
//}
// cout << " your number was : " << userNumber;
// cout << " The computer guessed" << computerGuess << " after " << computerGuesses <<" times\n";
//}
//
//void chapter_3()
//{
//	/*
//	Improve the code below to improve a scoring system, Deduct points if the player uses a hint.
//	*/
//
//	int score = 0;
//
//
//	enum fields {WORD, HINT, NUM_FIELDS};
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
//		{
//            cout << theHint;
//			score -= theHint.size();
//		}
//
//        else
//            cout << "Sorry, that's not it.";
//
//        cout <<"\n\nYour guess: ";
//        cin >> guess;
//    }
//
//    if (guess == theWord)
//	{
//		score += theWord.size();
//        cout << "\nThat's it!  You guessed it!\n";
//	}
//
//    cout << "\nThanks for playing.\n";
//	cout << "Your Score was" << score << endl;
//}
//
//
//void chapter_4()
//{
//	
//	//Write a program using vectors and iterators that allows a user to maintain a list of his of her favourite games. 
//	//The program should allow the user to list all game titles, add a game title, and remove a game title. 
//
//	
//	//setup vectors and iterators that will need to be used.
//	vector<string> gameList;
//	vector<string>::iterator gameListIter;
//
//	int userInput= 0;
//	//the program loop 
//		//while ( person doesnt exit)
//			//ask user what they want to do, 
//			//1. read from the list 
//			//2. add to the list
//			//3. remove from the list.
//	cout << " Enter your favourite games by typing in the name and press enter ( 1 word ) " << endl;
//
//	while(userInput != 4)
//	{
//		cout << " Hello, would you like to.. " << endl;
//		cout << " Read from your list - 1 " << endl;
//		cout << " Add to your list - 2" << endl;
//		cout << " Remove an item from your list - 3" << endl;
//		cout << " Quit - 4" << endl;
//		cout << " type the corresponding number and press enter " << endl;
//
//		cin >> userInput;
//		int counter = 1;
//
//		switch(userInput)
//		{
//		case(1):
//			{
//				for(gameListIter = gameList.begin(); gameListIter != gameList.end(); gameListIter++)
//				{
//					
//					cout << counter << " -  " << *gameListIter << endl;
//					counter++;
//				}			
//			break;
//		case(2):
//			{
//				cout << " type the name of the game you want to place in your list " << endl;
//				string game;
//				cin >> game;
//				gameList.push_back(game);
//			}
//			break;
//		case(3):
//			{
//				cout << " type the number of the game you want to remove in your list " << endl;
//				int number;
//				cin >> number;
//				gameList.erase((gameList.begin() + number));
//			}
//			break;
//
//		}
//
//
//
//	}
//}
//
//
//
//
//	//Write pseudo code to word jumble from chapter 3.
//	//setup enums for multidimesional array
//	//create multidimensional array and initialize it with words and hints.
//	//generate random number index.
//	//
//
//
//}
//
//void chapter_5()
//{
//
//	cout << getMyNumber();
//	cout << getMyNumber(5);
//
///*	Rewrite the hangman game from chapter 4 using functions. Include a function to get the player's guess and another 
//	function to determine whether the players guess is in the secret word - THIS NEEDS DOING.
//*/
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
//		char guess = playerGuess();
//		
//		guess=toupper(guess);//makes the guess character uppercase
//
//		while(used.find(guess) != string::npos)
//		{
//			cout << "You've already guessed " << guess << endl;
//			cout << "Enter your guess :" <<endl;
//			cin>>guess;
//			guess=toupper(guess);
//		}
//		used+= guess;
//		
//
//		if(THE_WORD.find(guess) != string::npos)
//		{
//			cout << "THATS RIGHT! "<< guess<< " is in the word.\n";
//			//update soFar to include newly guessed letter
//			for(int i = 0; i < THE_WORD.length(); ++i)
//			{
//				if(THE_WORD[i]==guess)
//				{
//					soFar[i] = guess;
//				}
//			}
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
//
//}
//
//char playerGuess()
//{
//	char guess;
//	cout << "\n\nEnter your guess : ";
//	cin >> guess;
//	return guess;
//}
//
//int getMyNumber(string text)
//{
//	string prompt = text;
//	cout << prompt;
//	int num;
//	cin >> num;
//	return num;
//}
//
//int getMyNumber(int number)
//{
//	return number;
//}
//
//void chapter_6()
//{
//	// Rewrite the mad-lib game from chapter 5 using references
//	cout << "Welcome to Mad Lib.\n\n";
//    cout << "Answer the following questions to help create a new story.\n";
//
//	string name = askText("Please enter a name: ");
//    string noun = askText("Please enter a plural noun: ");
//    int number = askNumber("Please enter a number: ");
//    string bodyPart = askText("Please enter a body part: ");
//    string verb = askText("Please enter a verb: ");
//    
//    tellStory(name, noun, number, bodyPart, verb);
//
//	cout << "\n\n";
//	printf("There is some commented code that you should look at for chapter 6");
//	/*Whats wrong with the following?
//	int score;
//	score = 1000;
//	float& refToScore = score;
//
//	You cannot give a float reference to an integer. You will get an error and the program will not compile
//	*/
//
//	/*What's wrong with the following function?
//	int& plusThree(int number)
//	{
//		int threeMore = number + 3;
//		return threeMore
//	}
//
//	This will return a reference of threeMore, but after this function, threeMore doesnt exist anymore.
//	So the reference will be referencing something that doesnt actually exist anymore Q.Q
//	*/
//
//
//}
//
//
//string askText(string prompt)
//{
//	cout << prompt;
//	string text;
//	cin >> text;
//	return text;
//}
//int askNumber(string prompt)
//{
//	cout << prompt;
//	int num;
//	cin >> num;
//	return num;
//}
//
//void tellStory(string& name,string& noun,int& number, string& bodyPart,string& verb)
//{
//	cout << "\nHere's your story:\n";
//    cout << "The famous explorer ";
//    cout << name;
//    cout << " had nearly given up a life-long quest to find\n";
//    cout << "The Lost City of ";
//    cout << noun;
//    cout << " when one day, the ";
//    cout << noun;
//    cout << " found the explorer.\n";
//    cout << "Surrounded by ";
//    cout << number;
//    cout << " " << noun;
//    cout << ", a tear came to ";
//    cout << name << "'s ";
//    cout << bodyPart << ".\n";
//    cout << "After all this time, the quest was finally over. ";
//    cout << "And then, the ";
//    cout << noun << "\n";
//    cout << "promptly devoured ";
//    cout << name << ". ";
//    cout << "The moral of the story? Be careful what you ";
//    cout << verb;
//    cout << " for.";
//}
//
//
//
//
//void chapter_7()
//{
////Write a program with a pointer to a pointer to a string object. Use the pointer to the pointer to call the size() member function of the string object
//
//	string myName = "jack";
//	string* pMyName = &myName;
//	string* pMyName2 = pMyName;
//
//	cout << "Test : " << *pMyName2;
//	cout << pMyName2->size();
//
//
//	cout << "Answer the following questions to help create a new story.\n";
//
//	string name = askText("Please enter a name: ");
//	string* pName = &name;
//    string noun = askText("Please enter a plural noun: ");
//	string* pNoun = &noun;
//    int number = askNumber("Please enter a number: ");
//	int* pNumber = &number;
//    string bodyPart = askText("Please enter a body part: ");
//	string* pBodyPart = &bodyPart;
//    string verb = askText("Please enter a verb: ");
//	string* pVerb = &verb;
//    
//    pTellStory(pName, pNoun, pNumber, pBodyPart,pVerb);
//
//	cout << "\n\n";
//
//	int a = 10;
//	int& b = a;
//	int* c = &b;
//
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &(*c) << endl;
//
//}
//
//void pTellStory(string* name,string* noun,int* number, string* bodyPart,string* verb)
//{
//	cout << "\nHere's your story:\n";
//    cout << "The famous explorer ";
//    cout << *name;
//    cout << " had nearly given up a life-long quest to find\n";
//    cout << "The Lost City of ";
//    cout << *noun;
//    cout << " when one day, the ";
//    cout << *noun;
//    cout << " found the explorer.\n";
//    cout << "Surrounded by ";
//    cout << *number;
//    cout << " " << *noun;
//    cout << ", a tear came to ";
//    cout << *name << "'s ";
//    cout << *bodyPart << ".\n";
//    cout << "After all this time, the quest was finally over. ";
//    cout << "And then, the ";
//    cout << *noun << "\n";
//    cout << "promptly devoured ";
//    cout << *name << ". ";
//    cout << "The moral of the story? Be careful what you ";
//    cout << *verb;
//    cout << " for.";
//}
//
//int* pAskNumber(string prompt)
//{
//	cout << prompt;
//	int num;
//	cin >> num;
//	return &num;
//}
//
//string* pAskText(string prompt)
//{
//	cout << prompt;
//	string text;
//	cin >> text;
//	return &text;
//}