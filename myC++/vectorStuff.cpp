#include "vectorStuff.h"

vectorStuff::vectorStuff()
{

}

vectorStuff::~vectorStuff()
{
	cout << "Deleting Vector Stuff Object!\n";
	Sleep(500);
}

void vectorStuff::displayVector(const vector<int>& vec)
{
	for(vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		cout << *iter << endl;
	}

}

void vectorStuff::displayVector(const vector<double>& vec)
{
	for(vector<double>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		cout << *iter << endl;
	}

}

void vectorStuff::displayVector(const vector<float>& vec)
{
	for(vector<float>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		cout << *iter << endl;
	}

}

void vectorStuff::displayVector(const vector<char>& vec)
{
	for(vector<char>::const_iterator iter = vec.begin(); iter != vec.end(); iter++)
	{
		cout << *iter << endl;
	}

}

int vectorStuff::addElements(const vector<int>& vec)
{
	//for loop going through elements, 
	//iterator gets the number, and adds it to an int variable
	int sum =0;
	for(vector<int>::const_iterator Iter = vec.begin();Iter!=vec.end();Iter++)
	{
		sum += *Iter;
	}
	return sum;
}

double vectorStuff::addElements(const vector<double>& vec)
{
	//for loop going through elements, 
	//iterator gets the number, and adds it to an double variable
	double sum =0;
	for(vector<double>::const_iterator Iter = vec.begin();Iter!=vec.end();Iter++)
	{
		sum += *Iter;
	}
	return sum;
}

float vectorStuff::addElements(const vector<float>& vec)
{
	//for loop going through elements, 
	//iterator gets the number, and adds it to an float variable
	float sum =0;
	for(vector<float>::const_iterator Iter = vec.begin();Iter!=vec.end();Iter++)
	{
		sum += *Iter;
	}
	return sum;
}

//char vectorStuff::addElements(const vector<char>& vec)
//{
//	for loop going through elements, 
//	iterator gets the number, and adds it to an int variable
//	char sum = ' ';
//	vector<char>addedChars;
//	for(vector<char>::const_iterator Iter = vec.begin();Iter!=vec.end();Iter++)
//	{
//		addedChars.push_back(*Iter);
//	}
//	return addedChars;
//}