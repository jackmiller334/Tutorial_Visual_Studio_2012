#include <iostream>
#include<cstdlib>
#include<ctime> // access functions involving time. 
#include<vector>
#include <string>
#include <algorithm>
#include "myC++\vectorStuff.h"
#include <windows.h>
using namespace std;

int main()
{	

	vectorStuff vectorStuff;

	/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
	Find the sum of all the multiples of 3 or 5 below 1000.
	
	*/
	int sum = 0;
	for(int i = 0;i<1000;i++)
	{
		if((i%3==0) || (i%5==0))
		{
			sum += i;
		}
	}
	cout << sum << "\n\n";

	system("pause");
	return 0;
}