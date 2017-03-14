// liczby_pierwsze_ver_3.cpp -- program do sprawdzania czy dana liczba jest liczba pierwsza

#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	int n;	// ilosc testowanych liczb
	unsigned long long t = 0;					// zmienna testowa do werfikacji  iloczunu reszt

	cout << "Porgram do sprawdzania czy podana dodatnia liczba jest liczba pierwsza.\n\n";
	cout << "Podaj ilosc testowanych liczb: ";
	cin >> n;

	vector <int> liczba(n);		// tablica dynamiczna przechowujaca testowane liczby

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
			for (int j = 2, t=1; j <= ((liczba[i]) / 2); j++)			// petla sprawdz wszystkie mozliwe dzielniki
			{
				int d = ((liczba[i]) % j);					// reszta z dzielenia podanej liczby przez kolejne liczby - max to 1/2 z [(podanej liczby)+1]
				if (d != 0)									// gdy  testowany dzielnik daje reszte
				{
					t = t * d;
				}
				else									// gdzy testwoana dzielnik  nie daje reszty
				{
					cout << "Liczba " << liczba[i] << " nie jest pierwsza :(" << endl;
					cout << "Jej dzielnikiem jest np. liczba " << j << endl;
					t = t*d;
					j = liczba[i];
				}
					
				//cout << "\n uwaga t wynosi: " << t << endl << endl;

				if (t != 0)						// jesli zadna z testowanych wartosci nie jest dzielnikiem podanej liczby
				{
					cout << "Liczba " << liczba[i] << " jest liczba pierwsza :)\n";
					j = liczba[i];
				}
			}
		}
	}
	cin.get();
	return 0;
}
