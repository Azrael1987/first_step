// zad_10_4a.cpp - (200) - zadanie 4 z rodzialu 10 - defincja klasy z przestrzenia nazw
// kompilowac razem z zad_10_4a.cpp

#include "zad_10_4a.hpp"
#include <iostream>

using namespace SALES;

Sales::Sales(int n)					// konstruktor z argumentem
{
	double sum = 0.0;
	for (int i = 0; i < n; i++)			// przyjmowanie wartosci do tablicy
	{
		cout << "Podaj " << i + 1 << " wartosc: ";
		cin >> sales[i];
	}
	max = sales[0];

	for (int j = 0; j < n - 1; j++)		// wyznaczanie max
	{
		(max > sales[j + 1]) ? max = max : (max = sales[j + 1]);
		cout << "test 1 " << max << endl;
	}
	min = sales[0];
			
	for (int k = 0; k < n - 1; k++)					// wyznaczanie min
		{
			(min < sales[k + 1]) ? min = min : (min = sales[k + 1]);
			cout << "test 2 " << min << endl;
		}
	
	for (int m = 0; m < n; m++)			// obliczanie sumy i sredniej
	{
		sum += sales[m];
	}
	average = sum / n;

	for (int p = 0; p < n; p++)				// zerwoanie tablicy
	{
		sales[p] = 0.0;
	}
}

void Sales::showSales()
{
	cout << "\nPodsumownaie wporwadzonych liczb\n\n";
	cout << "Maksymalna wartosc to: " << max << endl;
	cout << "Minimalna wartosc to: " << min << endl;
	cout << "Srednia wartosc to: " << average << endl << endl;
}

