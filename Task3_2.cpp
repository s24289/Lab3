#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string>

//Napisz program, wyswietlajacy na ekranie znaki z klawiatury do momentu, az zostanie podany znak "t".


using std::cout;
using std::endl;
int main()
{
	int operacja = 1;
	char a = ' ';

	cout << "Pisz do woli!" << endl << endl;

	while (operacja) {

		cout << "Wcisnij jakis klawisz" << endl;
		a = _getch();
		cout << "Wpisales: " << a << endl;
		if (a == 't' || a == 'T')
		{
			break;
		}
	}
}