

#ifndef VECTOR_3D_H
#define VECTOR_3D_H

#include <cmath>
#include <iostream>

#define MIN(x,y)		(((x)<(y))?(x):(y))
#define MAX(x,y)        (((x)>(y))?(x):(y))


class Vector3D
{
public:

	float x; // Stores the X value for the Vector.
	float y; // Stores the Y value for the Vector.
	float z; // Stores the Z value for the Vector.

	Vector3D(float x = 0.0, float y = 0.0, float z = 0.0); // Custom Constructor for the Vector. Defaults to 0,0,0.
	~Vector3D();									 // Deconstructor.


	//Sets the Vector to a Zero Vector (0,0,0)
	void setToZero();

	//Tests to see if the Vector is a Zero Vector. ( 0,0,0 with no length).
	bool isZero();

	//Gets the distance from this vector to another.
	float distance( Vector3D vector);

	//Obtains the magnitude of the vector ( The length of a Vector ).
	float magnitude();

	//Obtains the magnitude squared.
	float magnitudeSquared();

	//Gets the dot Product between two vectors and returns as a float.
	float dotProduct(Vector3D vector);

	//Gets the Cross Product of Two vectors and returns as a Vector3D object.
	Vector3D crossProduct(Vector3D vector);	


	//Operator Overloads -------------------------
	Vector3D operator= (const Vector3D &vector);
	Vector3D operator+ (const Vector3D &vector);
	Vector3D operator- (const Vector3D &vector);
	Vector3D operator* (float f);
	Vector3D operator/ (float f);
	Vector3D operator+=(const Vector3D &vector);
	Vector3D operator-=(const Vector3D &vector);
	Vector3D operator*=(float f);
	Vector3D operator/=(float f);
	Vector3D operator==(const Vector3D &vector);
	Vector3D operator!=(const Vector3D &vector);
	friend std::ostream& operator<<(std::ostream& os,const Vector3D& vector);
	//Operator Overloads -------------------------

};

#endif