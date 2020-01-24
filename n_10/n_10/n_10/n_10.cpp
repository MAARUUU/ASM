//10
// Определить время падения камня на поверхности земли с высоты h.


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double h, g = 9.81;

	double c = 2;
	cin >> h;

	_asm
	{
		fld h
		fld c

		fmulp st(1), st(0)
		fld g
		fdivp st(1), st(0)

		fsqrt
		fst h
	}
	cout << h << endl;
	system("pause");
}