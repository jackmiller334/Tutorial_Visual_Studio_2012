#ifndef VECTOR_STUFF
#define VECTOR_STUFF

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <Windows.h>
using namespace std;

class vectorStuff
{
public:
	vectorStuff();
	~vectorStuff();

	//Displays an std::vector
	void displayVector(const vector<int>& vec);
	void displayVector(const vector<double>& vec);
	void displayVector(const vector<char>& vec);
	void displayVector(const vector<float>& vec);
	void displayVector(const vector<string>& vec);


	int addElements(const vector<int>& vec);
	//adds the elements inside an std::vector together and returns it


	double addElements(const vector<double>& vec);
	float addElements(const vector<float>& vec);


private:
protected:


};
#endif

