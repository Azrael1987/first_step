// condit.cpp -- program powonujacy podane liczby przy uzyciu  operatora wyboru -- listing 6.9

#include<iostream>

int main()
{
	using namespace std;
	int a, b;					// zmienne na porownywane liczby uzytkowania
	cout << "Podaj 2 liczby calkowie:\n";
	cin >> a >> b;					
	int c = a > b ? a : b;			// X warunek ? jesli prawda : jesli falsz
	cout << "Twoje liczby to " << a << " i " << b << ", a wieksza z nich to: " << c << endl;

	cin.get();
	cin.get();
	return 0;
}
