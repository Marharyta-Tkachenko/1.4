#include "Vector.h"
#include <iostream>
#include <Windows.h>

int main()
{
	int menuItem;
	do
	{
		cout << endl << endl;
		cout << "Choose an action:" << endl << endl;
		cout << " [1] - Create and output the vectors" << endl;
		cout << " [2] - Adding the vectors" << endl;
		cout << " [3] - Subtraction of the vectors" << endl;
		cout << " [4] - Scalar product of the vectors" << endl;
		cout << " [5] - Length of vector" << endl;
		cout << " [6] - cos of the angle between vectors (a, b)" << endl;
		cout << " [0] - Exit" << endl << endl;
		cout << "Enter value: "; cin >> menuItem;
		cout << endl << endl;

		switch (menuItem)
		{
		case 1:
			Vector a, b;
			a.Read();
			cout << "a = ";
			a.Display();

			b.Read();
			cout << "b = ";
			b.Display();
			break;
		case 2:
			Vector c = Add(a, b);
			cout << "c = " << c.toString() << endl;
			break;
		case 3:
			Vector d = Subtract(a, b);
			cout << "d = " << d.toString() << endl;
			break;
		case 4:
			cout << "a * b = " << ScalProd(a, b) << endl;
			break;
		case 5:
			cout << "|a| = " << a.Module() << endl;
			cout << "|b| = " << b.Module() << endl;
			cout << "|c| = " << c.Module() << endl;
			cout << "|d| = " << d.Module() << endl;
			break;
		case 6:
			cout << "cosA = " << CosA(a, b) << endl;
			break;
		case 0:
			break;
		default:
			cout << "You entered an incorrect value! "
				"Choose value from the menu" << endl;
		}
	} while (menuItem != 0);
}
