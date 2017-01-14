// liczby_pierwsze_2.cpp -- program który sprawdza czy dana liczba jest liczba pierwsza

#include <iostream>
int main()
{
	using namespace std;
	long int a;	// ilosc badanych liczb
	int i; // licznik wykonanych testów
	int b; // sprawdzana liczba
	int c; // reszta z dzielenia
	int d; // testowany dzielnikdzielni
	char q; // zmienna kontrolna do zamykania porgramu

	i = 0;

	cout << "Pozdaj ilosc testowanych liczb: ";
	cin >> a;

	do {
		i = i++;	 // zliczanie ile liczb juz przetestowano

		c = 1;
		cout << "podaj " << i << " liczbe do sprawdzenia: ";
		cin >> b;	// podaj licze do sprawdzenia
		if (b <= 3) {
			cout << b << " jest liczba pierwsza" << endl;
		}
		else
		{
			d = 1;
			if (c != 0 || d <= (b / 2) + 1)
			{
				d = d++; // program wogole nie wykonuje kolejnych petli :(
				c = b%d;

				cout << "dzielnik testowany " << d << " reszta z dzielenia = " << c << endl;
				if (c == 0)
				{
					cout << "Liczba " << b << " nie jest liczba pierwsza nowe. \n\n";
				} 
			}
			else 
			{
				do
				{
					cout << "Liczba " << b << " jest liczba pierwsza. \n\n";
					break;
				} while (c != 0);
				
			}
		}
	} while (i < a);

	do {
		cout << "czy chcesz zamknac program? (y/n): ";
		cin >> q;
	} while (q != 'y');
}
