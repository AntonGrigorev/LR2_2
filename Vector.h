#ifndef Vector_H	
#define Vector_H
#include <iostream> 
using namespace std;

class Vector
{
	int n;
	double* p;
public:
	Vector();

	Vector(double* l, int j);

	Vector(const Vector& V);

	Vector(Vector&& V1);

	Vector& operator =(Vector& v2);

	double operator [](int index);

	Vector& operator +(double* arr);

	friend istream& operator >>(istream& in, Vector& v);

	friend ostream& operator <<(ostream& out, Vector& v);

	~Vector();
};

#endif