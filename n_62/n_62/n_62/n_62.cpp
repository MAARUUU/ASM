//задача 62
// определить является ли число четным


#include "pch.h"
#include <iostream>

using namespace std;

int main()
{//определить является ли число четным
	unsigned short a, z = 0;
	cout << "Enter ";
	cin >> a;
	__asm {
		mov dx, 0
		mov ax, a
		mov bx, 2
		div bx

		mov z, 0

		mov bx, 0
		cmp dx, bx
		jne end1

		mov z, 1
		end1:
	}

	if (z == 1) {
		cout << "Odd" << endl;
	}
	else cout << "Even" << endl;

}
