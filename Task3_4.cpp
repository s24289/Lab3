#include <iostream>
using namespace std;

int main()
{

	int i, j, k;
	int wartosc, rzad;
	cout << "Podaj ilosc wierszy: " << endl;
	cin >> rzad;
	
	for (i = 0; i < rzad; i++)
	{
		wartosc = 1; // stała wartość 

		for (j = 0; j < rzad - 1 - i; j++)
		{
			cout << " ";
		}
		for (k = 0; k <= i; k++)
		{
			cout << " " << wartosc;
			wartosc = wartosc * (i - k) / (k + 1);
		}
		cout << endl << endl;
	}
	return 0;
}