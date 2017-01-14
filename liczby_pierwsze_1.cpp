// liczby_pierwsze_1.cpp -- program który sprawdza czy dana liczba jest liczba pierwsza

#include <iostream>
int main()
{
	using namespace std;
	long int n;	// ilosc badanych liczb
	int i; // licznik iteracji
	int a; // sprawdzana liczba
	int b; // reszta z dzielenia
	int c; // testowany dzielnikdzielnik
	long long e; // liczba kontorlna
	char q; // zmienna kontrolna do zamykania porgramu
	int k; // dodatkowy parametr do petli

	i = 0;
	
	cout << "Pozdaj ilosc testowanych liczb: ";
	cin >> n;

	do {
		i = i++;	 // zliczanie ile licz juz przetestowano

		c = 1;
		cout << "podaj " << i << " liczbe do sprawdzenia: ";
		cin >> a;	// podaj licze do sprawdzenia
		if (a <= 3) {
			cout << a << " jest liczba pierwsza" << endl;
		}
		else
		{
			e = 1;
			do
			{

				c = c++;
				b = a%c;
				e = e*b;
				
				cout << "dzielnik testowany " << c << " reszta z dzielenia = " << b << " a iloczyn reszt = " << e <<endl;

				k = (a / 2) + 1;

			} while (c <= k /*;e==0*/);
			if (e != 0)
			{
				cout << "Liczba " << a << " jest liczba pierwsza. \n\n";
			}
			else
				cout << "Liczba " << a << " nie jest liczba pierwsza. \n\n";
		}
	} while (i < n);

	do {
		cout << "czy chcesz zamknac program? (y/n): ";
		cin >> q;
	} while (q != 'y');
}
