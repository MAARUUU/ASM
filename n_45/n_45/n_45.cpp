//задача 45
//Даны действительные числа a, b, c, d. Если a ≤ b ≤ c ≤ d, то каждое число заменить наибольшим из них; 
 //если a > b > c > d, то числа оставить без изменения; в противном случае все числа заменяются их квадратами.

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	short  a, b, c, d;

	cout << "Enter a,b,c,d";
	cout << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	__asm {
		mov ax, [a]
		mov bx, [b]
		mov cx, [c]
		mov dx, [d]

		cmp ax, bx
		jbe lok1; <=
		ja fut1; >
		jmp  muuv


		lok1 :
		cmp bx, cx
			jbe lok2; <=
			ja fut1; >
			jmp muuv

			lok2 :
		cmp cx, dx
			jbe lok3; <=
			ja fut1; >
			jmp muuv

			lok3 :
		mov ax, [d]
			mov bx, [d]
			mov cx, [d]
			mov dx, [d]

			jmp lok4


			lok4 :
		mov[a], ax
			mov[b], bx
			mov[c], cx
			mov[d], dx

			jne kok

			fut1 :
		cmp bx, cx
			ja fut2; <
			jmp muuv

			fut2 :
		cmp cx, dx
			ja fut3; <
			jmp muuv

			fut3 :
		jmp lok4


			muuv :
		cwd
			mov ax, [a]
			imul ax
			mov[a], ax
			mov ax, [b]
			imul ax
			mov[b], ax
			mov ax, [c]
			imul ax
			mov[c], ax
			mov ax, [d]
			imul ax
			mov[d], ax

			kok :

	}
	cout << a << " " << b << " " << c << " " << d;
}