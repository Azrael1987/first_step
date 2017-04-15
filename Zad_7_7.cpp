// Zad_7_7.cpp - (154) - zadanie 7 z rodzialu 7
//funkcje przeksztalcajace tablice  bazujace na wskaznikach okreslajacych zakres tab

#include <iostream>

const int Max = 5;
double properties[Max];							// tab nieruchomosci

//portotypy funkcji
double * fill_array(double * begin ,  double * end);		// p f przyjumujacej dane do tab
void show_array(double * begin, double * fin);				  // p f wyswietlajacej dane z tab 
void revalue(double r, double * begin, double * fin);		// p f modyfikujacej dane w  tab

int main()
{
	using namespace std;
	

		// funkcja zwroci wskaznik na koniec tablicy
	double * fin = fill_array(properties, properties + Max);

	show_array(properties, fin);					// f pokazuje dane z tab

	if ((fin - properties -1) > 0)
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
		revalue(factor, properties, fin);				// wywolanie f modyfikujacej tablice
		show_array(properties, fin);					// wywoalnie f prezentujacej dane z tablicy
	}
	cout << "Gotowe.\n";
	cin.get();
	cin.get();
	return 0;
}

double * fill_array(double * begin, double * end)
{
	using namespace std;
	double * pt;
	double temp;
	int j;
	
	for (pt = begin,  j = 0; pt != end; pt++, j++)
	{
		cout << "Podaj " << j + 1 << " wartosc: ";
		cin >> temp;
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
		*pt = temp;
	}
	double * fin;
	fin = pt;
	return fin;
}

void show_array(double * begin,  double * fin)
{
	using namespace std;
	int k;
	double * pt;
	for (pt = begin, k=0; pt != fin; k++, pt++)
	{
		cout << fixed;			// foramtowanie liczb - zapis z 2 miejscami po przecinku
		cout.precision(2);
		cout.setf(ios_base::showpoint);
		cout << "Nieruchomosc nr :" << k + 1 << " ma wartosc " << *pt << endl;
	}
}

void revalue(double r, double * begin, double * fin)
{
	double * pt;
	for (pt = begin; pt != fin; pt++)
	{
		*pt *= r;
	}
}
