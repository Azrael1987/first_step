// arrfun3_X.cpp -- (132) - listing 7.4 -- slowo const i 3 funkcje obslugujace tablice

#include <iostream>

const int Max = 5;

//portotypy funkcji
int fill_array(double arr[], int limits);			// p f przyjumujacej dane do tab
void show_array(const double arr[], int n);				// p f wyswietlajacej dane z tab - const uniemozliwia  dokonanie  funkcji zmain w tab
void revalue(double r, double arr[], int n);		// p f modyfikujacej dane w  tab

int main()
{
	using namespace std;
	double properties[Max];							// tab nieruchomosci

	int size = fill_array(properties, Max);			// funkcja z wroci  ilosc el w tab
	show_array(properties, size);					// f pokazuje dane z tab

	if (size > 0)
	{
		cout << "Podaj wspolczynnik zmiany wartosc: ";
		double factor;								// zmiennna przechowujaca wspolczynnik
		while (!(cin >> factor))					// test czy factor ma wartosc liczbowa
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Niepoprawna wartosc; podaj liczbe: ";
		}
		revalue(factor, properties, size);				// wywolanie f modyfikujacej tablice
		show_array(properties, size);					// wywoalnie f prezentujacej dane z tablicy
	}
	cout << "Gotowe.\n";
	cin.get();
	cin.get();
	return 0;
}

int fill_array(double arr[], int limits)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limits; i++)
	{
		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >>temp;
		if (!cin)				// test poprawnosci danych
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bledne dane, wprowadzanie dancyh przerwane.\n";
			break;
		}
		else if (temp < 0)
		{
			break;
		}
		arr[i] = temp;
	}
	return i;
}

void show_array(const double arr[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout<<fixed;			// foramtowanie liczb - zapis z 2 miejscami po przecinku
		cout.precision(2);
		cout.setf(ios_base::showpoint);
		cout << "Nieruchomosc nr :" << i + 1 << " ma wartosc " << arr[i] << endl;
	}
}

void revalue(double r, double arr[], int n)
{
	for (int i = 0; i < n; i++)
		arr[i] *= r;
}
