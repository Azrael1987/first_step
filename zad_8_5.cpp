// zad_8_5.cpp - 179 - zadanie 5 z rodzialu 8 - szablon funkcji sortujacej

#include<iostream>

using namespace std;

const int ArSize = 5;

template<typename T>
T max5(T tab[]);

int main()
{
	cout << "Program wyszukujacy najwieksza wartosc z tablicy.\n\n";
	
	int tabi[ArSize] = { 10,8,6,19,7 };
	double tabd[ArSize] = { 12.5, 5.3, 1.6, 3.2, 15.1 };
	
	cout << "Najwieksza wartosc z tablicy liczb calkowitych to: " << max5(tabi) << endl;
	cout << "Najwieksza wartosc z tablicy liczb zmiennoprzecinkowych to: " << max5(tabd) << endl;
	cin.get();
	return 0;
}

template<typename T>
T max5(T tab [])
{
	T m = tab[0];
	for (int i = 0; i <(ArSize-1); i++)
	{
		m = m > tab[i+1] ? m : tab[i+1];
	}
	return m;
}
