// cinfish.cpp -- petla do wczytywania liczb - dane nie liczbowe koncza petle -- listing 6.13
#include <iostream>
const int Max = 5;		// nazwa stałej z duzej litery bo const
int main()
{
	using namespace std;

	double fish[Max];			// tablica na dane o wadze ryb
	cout << "Prosze podac wage swoich ryb.\n";
	cout << "maksymalnie mozna podac " << Max << " ryb.\n";
	cout << "Wpisz \'q\', zeby zakonczyc wprowadzanie danych.\n";
	cout << "\nRyba 1.: ";

	int i = 0;
	while (i < Max && cin >> fish[i])		// 2 warunki: I czy jest wolne miejsce, II czy wporwadzone liczbe typu doble
	{
		if (++i < Max)
		{
			cout << "ryba " << i + 1 << ".: ";
		}
	}

	// obliczanie sredniej

	double total = 0.0;			//zmienna przechowujaca sumaryczna wage
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}

	// wyswietlanie wynikow
	if (0 == i)
	{
		cout << "Brak danych o rybach.\n";
	}
	else
	{
		cout << total / i << " kg to srednia waga Twoich " << i << " ryb.\n";
	}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
		return 0;
}
