#pragma once
#include <string>

using namespace std;

class Vector
{
private:
	double x, y, z;

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	double GetZ() const { return z; }

	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	void SetZ(double value) { z = value; }

	bool Init(double x, double y, double z);
	void Read();
	void Display() const;

	string toString() const;

	friend Vector Add(Vector l, Vector r);
	friend Vector Subtract(Vector l, Vector r);
	friend double ScalProd(Vector l, Vector r);
	double Module();
	friend double CosA(Vector l, Vector r);
};
 

