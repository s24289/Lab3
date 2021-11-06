#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    float a, b;

    cout << "Hello World!\n"<< endl<<endl;
    cout << "Wprowadz wartosc A oraz B"<<endl;
    cin >> a;
    cin >> b;
    
    cout << std::setprecision(2) << std::fixed;
    
    //suma
    cout <<"Suma: " << a + b << endl;
    
    //ró¿nica
    cout<<"Roznica: " << a - b << endl;
    //iloczyn
    cout <<"Iloczyn: " << a / b << endl;
    //iloraz
    cout << "Iloraz: " << a * b << endl;


    return 0;

}

