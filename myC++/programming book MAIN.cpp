//#include "My Tutorials.h"
//
//int main()
//{	
//
//	Tutorials Tutorial;
//
//
//	/* THIS NEEDS TO BE INCLUDED IN THE SWITCH
//	
//	*/
//
//	string exit;
//	while(exit!="exit")
//	{
//	
//	Tutorial.begin();
//	int choice;
//
//	cin >> choice;
//
//	if((choice == 0) || (choice ==1) || (choice ==2) || (choice ==3) || (choice ==4) || (choice ==5) || (choice ==6) || (choice ==7) || (choice==8))
//	{
//
//		switch(choice)
//		{
//		case(0):
//			{
//				cout << "PLAYING WITH STRINGS" << endl;
//				Tutorial.playingWithStrings();
//				break;
//			}
//		case(1):
//			{
//				cout << "STARTING tic tac toe" << endl;
//				Tutorial.ticTacToe();
//			}
//				break;
//		case(2):
//			{
//				cout << "Starting word jumble" << endl;
//				Tutorial.wordJumble();
//				break;
//			}
//		case(3):
//			{
//				cout << "Starting 'Standard Template Library' ( Iterators )" << endl;
//				Tutorial.iterators();
//				break;
//			}
//		case(4):
//			{
//				cout << "Starting Functions" << endl;
//				Tutorial.functions();
//				break;
//			}
//		case(5):
//			{
//				cout << "Starting References" <<endl;
//				Tutorial.references();
//				break;
//			}
//		case(6):
//			{
//				cout <<"Starting Enumurations" << endl;
//				Tutorial.enumuration();
//				break;
//			}
//		case(7):
//			{
//				cout << " Starting Standard template library algorithms" << endl;
//				Tutorial.standardTemplateLibraryAlgorithms();
//				break;
//			}
//		case(8):
//			{
//				cout << " Starting Pointers" << endl;
//				Tutorial.pointers();
//				break;
//			}
//		}
//	}
//	else
//	{
//		cout << "Please enter a number between 0-8" << endl;
//	}
//
//	cout<< "type exit to quit or anything else to begin again" << endl;
//	cin>>exit;
//	}
//}
//
