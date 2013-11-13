#include <iostream>

using namespace std;
int main()
{
	char answer; // Creating a char variable 
	answer = 'y'; // Setting the char variable to 'y'
	

	while(answer == 'y') // While statement. Checking if variable 'answer' is equal to 'y'.
	{
		cout << "Do you want to play another time?: y/n" << endl;
		cin >> answer;
	}

	cout << "Ok, see you soon!"<< endl;
	system("pause");
	return 0;
}