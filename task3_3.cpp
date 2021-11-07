// task3_3.cpp

/*
Napisz program, który będzie rozwiązywał równanie kwadratowe:
a) Wypisze na konsolę, jaką postać ma równanie kwadratowy.
b) Pobierze od użytkownika liczby A, B i C
c) Wypisze postać równania kwadratowego z uwzględnieniem wartości dla A,B i C.
d) Obliczy i wypisze pierwiastki równania.
*/
#include <iostream>
#include<iomanip>
#include<cmath>

int a, b, c;

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hello reader\n";
    cout << "Podaj wartosci a ; b ; c rownania kwadratowego" << endl;
    cout << "Wzor rownania kwadratowego Ax^2 + Bx + c = 0" << endl << endl;
    
    cout << "Dane: ";
    cin >> a;
    cin >> b;
    cin >> c;
   
    cout << "Wprowadziles wartosc a: " << a << endl;
    cout << "Wprowadziles wartosc b: " << b << endl;
    cout << "Wprowadziles wartosc c: " << c << endl << endl;
    
    //Calculate *-*-*-*-*-*

    //Delta
    int b_kwadrat = pow(b, 2);
    int delta = b_kwadrat - 4 * a * c;
    float pierwiastekDelty = sqrt(delta);
    cout << "Twoja delta wynosi: " << delta << endl;
    cout << "Delta pod pierwiastkiem wynosi: " << pierwiastekDelty << endl << endl;


    //loop if
    if (delta > 0)
    {
        cout << "Ma dwa miejsca zerowe" << endl << endl;
        float x1 = ((-b - sqrt(delta)) / (2 * a));
        cout <<"x1 = " << x1 << endl;
       
        //Wynik pod pierwiastek
        float x1pierwiastek = sqrt(x1);
        cout << "x1 pod pierwiastek = " << x1pierwiastek << endl;

        float x2= ((-b + delta) / (2 * a));
        cout << "x2 = " << x2 << endl;
            
        //Wynik pod pierwiastek
        float x2pierwiastek = sqrt(x2);
        cout << "Wynik x2 pod pierwiastek = " << x2pierwiastek << endl;


    }
    else if (delta == 0)
    {
        cout << "Ma jedno miejsce zerowe";
        int x0 = -(b / 2 * a);
        cout << " x0 = " << x0 << endl;
        float x0pierwiastek = sqrt(x0);
        cout << "Wynik x0 pod pierwiastek = " << x0pierwiastek << endl;
    }
    else
    {
        cout << "Nie ma miejsc zerowych!" << endl << endl;
    }

    return 0;
}

