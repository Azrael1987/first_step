// and.cpp -- uzycie opratora koniunkcji logiczne -- listing  6.5

#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 5;		// rozmiar tablicy na  dane o sasiadach
	float naaq[ArSize];			// tablica na dane o sasiadach

	cout << "Podaj wartosc wspolczynnika WPNW (Wspolczynnika podatnosci na wplyw) "
		<< "swoich sasiadow. \nDzialanie porgramu zakonczy sie po podaniu "
		<< ArSize << " wartosci lub po podaniu wartosci ujemnej.\n";
	int i = 0;					// licznik petli
	float temp;					// tymczasowy bufor dla danych

	cout << "Pierwsza wartosc: ";
	cin >> temp;

	while (i < ArSize && temp >= 0)			// 2 warunki konieczne do wykonania insatrukcji z petli
	{
		naaq[i] = temp;						// przyjecie danych z bufora
		i++;
		if (i < ArSize)
		{
			cout << "Podaj nastepna wartosc: ";
			cin >> temp;
		}
	}

	if (0 == i)
	{
		cout << "Brak danych. \nProgram zaraz zakonczy swoja prace.";
	}
	else
	{
		float your_WPNW;				// wartosc wspolczynnika  uzytkownika
		int count = 0;					// licznik do porownaia wspolczynnikow
		cout << "Podaj swoj WPNW: ";
		cin >> your_WPNW;

		for (int j = 0; j < i; j++)
		{
			if (naaq[j] > your_WPNW)
			{
				count++;
			}
		}
		cout << count << " z Twoich sasiadow jest bardziej podatny od Ciebie.\n";
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
