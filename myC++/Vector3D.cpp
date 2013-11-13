#include "Vector3D.h"

//Custom Contructor. Allows a vector to be created with points set at its creation.
Vector3D::Vector3D(float x,float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector3D::~Vector3D()
{

}

//Tests to see if the Vector is a Zero Vector. ( 0,0,0 with no length).
bool Vector3D::isZero()
{
	if(x==0.0f && y==0.0f && z==0.0f)
	{
		return true;
	}
	return false;
}

//sets the vector to a zero Vector. (0,0,0)
void Vector3D::setToZero()
{
	x=0.0f;
	y=0.0f;
	z=0.0f;
}

//Obtains the magnitude of the vector ( The length of a Vector ).
float Vector3D::magnitude()
{
	return sqrt( (x*x) + (y*y) + (z*z));
}

//Obtains the magnitude squared.
float Vector3D::magnitudeSquared()
{
	return ( (x*x) + (y*y) + (z*z));
}

//Gets the dot Product between two vectors and returns as a float.
float Vector3D::dotProduct(Vector3D vector)
{
	return ( (x *vector.x) + (y * vector.y) + (z * vector.z) );
}

//Gets the Cross Product of Two vectors and returns as a Vector3D object.
Vector3D Vector3D::crossProduct(Vector3D vector)
{
	 return Vector3D( ((y * vector.z) - (vector.y * z)), ((x * vector.z) - (vector.x * z)), ((x * vector.y) - (vector.x * y)) ); 
}



//Operator Overloads---------------------------------------------
Vector3D Vector3D::operator= (const Vector3D &vector)
{
	x=vector.x;
	y=vector.y;
	z=vector.z;
	return *this;
}


Vector3D Vector3D::operator==(const Vector3D &vector)
{
	return ((x == vector.x) && (y == vector.y) && (z == vector.z));
}

Vector3D Vector3D::operator!=(const Vector3D &vector)
{
	return ((x != vector.x ) || (y != vector.y) || (z != vector.z));
}

Vector3D Vector3D::operator- (const Vector3D &vector)
{
	return Vector3D ( x - vector.x, y - vector.y, z-vector.z);
}

Vector3D Vector3D::operator* ( float f)
{
	return Vector3D( x * f, y * f, z * f );
}

Vector3D Vector3D::operator+ ( const Vector3D &vector)
{
	return Vector3D ( x + vector.x, y + vector.y, z + vector.z );
}


Vector3D Vector3D::operator/ (float f)
{
	return Vector3D ( x / f, y / f, z / f);
}

Vector3D Vector3D::operator+= ( const Vector3D &vector )
{
	x += vector.x; y += vector.y; z += vector.z; 
	return *this;
}

Vector3D Vector3D::operator-= ( const Vector3D &vector ) 
{
	x -= vector.x; y -= vector.y; z -= vector.z; 
	return *this; 
}

Vector3D Vector3D::operator*= ( float f ) 
{
	x *= f; y *= f; z *= f; 
	return *this; 
}

Vector3D Vector3D::operator/= ( float f )
{ 
	x /= f; y /= f; z /= f;
	return *this; 
}

std::ostream& operator<<(std::ostream& os,const Vector3D& vector)
{
	os << "X:";
	os << vector.x;
	os << " Y:";
	os << vector.y;
	os << " Z:";
	os << vector.z;
	os << "\n";
	return os;
}