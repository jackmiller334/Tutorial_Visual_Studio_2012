#ifndef _MillerMath_
#define _MillerMath_

////////////////////////////
// A class to handle 
#include <iostream>
const float PI = 3.14;
class MillerMath
{
public:
	MillerMath();
	~MillerMath();

	//Checks if a number is a prime
	bool checkPrime(int num);

	//Gets the area of a circle using a radius
	float getAreaOfCircle(float radius);
	
	//Gets the circumfurence of a circle using a diameter.
	float getCirumfurence(float diameter);

	

	// Methods to get diameter 
	//////////////////////////////////////////////////////////////////////
	//Get diameter of circle using the circumference 
	float getDiameterFromCircumference(float circumference);

	//Get diameter of circle using the radius 
	float getDiameterFromRadius(float radius);

	//Get diameter of circle using the area 
	float getDiameterFromArea(float area);
	///////////////////////////////////////////////////////////////////////


	//Converts Degrees to Radians
	float convertDegreesToRadians(float degrees);

	//Converts Radians To Degrees
	float convertRadiansToDegrees(float radians);
	

	// phytagoras
	//trigonometry 

	// perhaps stuff on distance and time 
	
	//SUVATS?
	//*/


private:
protected:
};


#endif