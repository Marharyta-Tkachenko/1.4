#include <iostream>
#include "Vector.h"
#include <sstream>

bool Vector::Init(double x, double y, double z)
{
	SetX(x);
	SetY(y);
	SetZ(z);
	return true;
}

void Vector::Read()
{
	double X, Y, Z;
	do
	{
		cout << "x = "; cin >> X;
		cout << "y = "; cin >> Y;
		cout << "z = "; cin >> Z;

	} while (!Init(X, Y, Z));
}

void Vector::Display() const
{
	cout << toString() << endl;
}

string Vector::toString() const
{
	stringstream SS;
	SS << "(" << x << "; " << y << "; " << z << ")" << endl;
	return SS.str();
}

Vector Add(Vector l, Vector r)
{
	Vector tmp;
	tmp.x = l.x + r.x;
	tmp.y = l.y + r.y;
	tmp.z = l.z + r.z;
	return tmp;
}

Vector Subtract(Vector l, Vector r)
{
	Vector tmp;
	tmp.x = l.x - r.x;
	tmp.y = l.y - r.y;
	tmp.z = l.z - r.z;
	return tmp;
}

double ScalProd(Vector l, Vector r)
{
	double scal = (l.x * r.x) + (l.y * r.y) + (l.z * r.z);
	return scal;
}

double Vector::Module()
{
	double mod = sqrt((x * x) + (y * y) + (z * z));
	return mod;
}

double CosA(Vector l, Vector r)
{
	double cosA = ScalProd(l, r) / (l.Module() * r.Module());
	return cosA;
}
