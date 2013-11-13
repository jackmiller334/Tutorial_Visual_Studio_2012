#include "millerMath.h"

MillerMath::MillerMath()
{
}

MillerMath::~MillerMath()
{}

bool MillerMath::checkPrime(int num)
{
	int count = 0;

	for(int i = 1;i<=num;i++)
	{
		if(num%i == 0)
		{
			count ++;
		}
	}

	if(count == 2)
	{
		std::cout<< "Prime" << std::endl;
		return true;
	}
	else
		std::cout << "Not Prime" << std::endl;
		return false;
}



float MillerMath::getAreaOfCircle(float radius)
{
	return PI * (radius*2);
}



float MillerMath::getCirumfurence(float diameter)
{
	return (PI * diameter);
}



float MillerMath::getDiameterFromCircumference(float circumference)
{
	//divide the circumference by PI 
	return (circumference / PI );

}

float MillerMath::getDiameterFromRadius(float radius)
{
	//double the radius to get the diameter
	return (radius * 2);
}

float MillerMath::getDiameterFromArea(float area)
{
	//get the area and square root,
	//the answer from this should be divided by pie to get the diameter.
	return (sqrt(area) / PI);
}
