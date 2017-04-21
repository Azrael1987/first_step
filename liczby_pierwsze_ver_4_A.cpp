// liczby_pierwsze_ver_4.cpp -- program do sprawdzania czy dana liczba jest liczba pierwsza

#include <iostream>
#include <vector>
#include <cmath>

int main()
{
	using namespace std;

	int n;	// ilosc testowanych liczb
	
	cout << "Porgram do sprawdzania czy podana dodatnia liczba jest liczba pierwsza.\n\n";
	cout << "Podaj ilosc testowanych liczb: ";
	cin >> n;

	vector <int> liczba(n);		// tablica dynamiczna przechowujaca testowane liczby
	vector <int> pierw(n);		// tab dyn przechowujaca pierwiastek z badanej liczby +1
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nPodaj " << i + 1 << " liczbe do sprawdzenia: ";
		cin >> liczba[i];
		cin.get();
		if (0 <= liczba[i] && liczba[i] <= 3)
		{
			cout << "Liczba " << liczba[i] << " jest liczba piersza.\n";
		} 
		else
		{
			unsigned long long t = 1;					 // zmienna testowa do werfikacji  iloczunu reszt
			for (int i = 0; i < n; i++)
				pierw[i] = sqrt(liczba[i]) + 1;

			for (int j = 2; j <= pierw[i]; j++)			// petla sprawdz wszystkie mozliwe dzielniki
			{
				int d = ((liczba[i]) % j);					// reszta z dzielenia podanej liczby przez kolejne liczby - max to pierwiastek tej liczby  zaokraglony w gore lub +1]
				if (d == 0)									// gdy  testowany dzielnik nie daje reszty
				{
					cout << "Liczba " << liczba[i] << " nie jest pierwsza :(" << endl;
					cout << "Jej dzielnikiem jest np. liczba " << j << endl;
					t = t*d;
					j = liczba[i];
				}
				else									// gdzy testwoana dzielnik  daje reszte
				{
					t = t * d;
				}

				if (t != 0 && j == pierw[i])						// jesli zadna z testowanych wartosci nie jest dzielnikiem podanej liczby
				{
					cout << "Liczba " << liczba[i] << " jest liczba pierwsza :)\a\n";
				}
			}
		}
	}
	cin.get();
	return 0;
}
