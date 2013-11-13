//#ifndef MY_TUTORIALS
//#define MY_TUTORIALS
//
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//#include <cctype>
//
//using namespace std;
//
//
//class Tutorials
//{
//public: 
//	Tutorials();
//	~Tutorials();
//		void begin();
//		void playingWithStrings();
//		void ticTacToe();
//		void wordJumble();
//		void iterators();
//		void blackJack();
//		void references();
//		void pointers();
//		void enumuration();
//		void standardTemplateLibraryAlgorithms();
//		void extraStuff();
//
//		//Functions for Chapter 5 of the book -----------------------------------------------------------------------------------------------------
//		void functions();
//		void func();
//		int askNumber(int high,int low = 1); // this function has a default argument.  *low = 1;  if the argument for low isnt entered, default to 1
//
//		//overloaded functions   *They can accept both int and string arguments!
//		int triple(int number);
//		string triple(string word);
//		
//		int testFunction(string apple);
//
//		/* This is an inlined function, which means you ask the compilier to create a copy of the function everywhere its called.
//		 As a result, this can sometimes result in a small performance boost.
//		- If used too often, can be detrimental to performance.
//		- To use this, put 'inline' before the function definition ( the part you put code in )
//		*/
//		int inlinedFunction(int number);
//		//-----------------------------------------------------------------------------------------------------------------------------------------
//
//		//Functions for chapter 6 of the book. ----------------------------------------------------------------------------------------------------
//		void badSwap(int x,int y);
//		void goodSwap(int& x, int& y); 
//		void displayVector(const vector<string>& vector); /*this function parameter take a constant vector reference, 
//		 												 which means it cannot change any values passed to it by reference.
//														 (So, 'vector(an inventory in this case)' is safe from changes,
//														 but also doesnt copy itself when sent to the function)
//														 */
//		//just some extra function overloads to display different types of vectors
//		void displayVector(const vector<int>& vector);
//		void displayVector(const vector<double>& vector);
//		void displayVector(const vector<char>& vector);
//		void displayVector(const vector<float>& vector);
//
//		string& refToElement(vector<string> &inventory,int i); // string& means that the return type is a string REFERENCE
//
//		//Chapter 6, tic tac toe function headings.
//		void ticTacToeInstructions(); // displays te game instructions;
//		char askYesNo(string question); // asks a yes or no question, returns either 'y' or 'a'
//		int askNumberTicTac(string question, int high, int low = 0); // 
//		char humanPiece(); // determines the humans piece, returns either 'X' or 'O'
//		char opponent(char piece); // calculates the opposing piece given a piece. 
//		void displayBoard(const vector<char>& board); // displays the board thats given to it.
//		char winner(const vector<char>& board, char EMPTY, char TIE,char NO_ONE); // determines the games winner. Recieves a board, returns 'Y' if winner, 'N' if not, and 'T' if tie.
//		bool isLegal(const vector<char>& board, int move,const char EMPTY); // checks if a square is empty, returns either true of false.
//		int humanMove(const vector<char>& board, char move); // gets the human move, receives the board,and the humans piece. Returns the humans move.
//		int computerMove(vector<char> board, char computer,char EMPTY,char TIE,char NO_ONE); // calculates the computers move, receives a board an the computers piece. returns computers move
//		void announceWinner(char winner, char computer, char human); // congratulates the winner or declares a tie. 
//
//
//		//Functions for chapter 7 of the book. ----------------------------------------------------------------------------------------------------
//		void goodSwap(int* const x, int* const y); // function that takes a constant pointer
//		string* ptrToElement(vector<string>* const pVec, int i);
//		string* ptrToElement2(vector<string>* const pVec, int i);
//
//		void increase(int* const array, const int NUM_ELEMENTS);
//		void displayArray(const int* const array, const int NUM_ELEMENTS);
//
//
//
//private:
//protected:
//	
//
//};
//
//#endif