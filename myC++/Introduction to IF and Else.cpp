#include <iostream>
using namespace std;

int main()
{

int age;//creates a variable called 'age' which holds an INTEGER ( WHOLE NUMBER )

cout << "Enter your age as a whole number" << endl;

cin >> age;//this lets the user type in a number, and assigns that number to the AGE variable.

if(age<18) // Checks to see if the value in 'age' is lower than 18.
{
cout << "Enjoy your childhood, before things get crap" << endl; // if it is, show this message
}
else
cout <<"Welcome to the adult life, you're in for a treat" << endl;// if it isnt under 18 ( it MUST be higher ), then display this message.

system("pause");//pauses the system so that you can see whats happened.

return 0;
}
