// zad_8_6.cpp - 180 - zadanie 6 z rodzialu 8 - 
// szablon funkcji wybierajacej max wartosc 
// oraz szablon ze specjalizacja dla lancuchow podajacy adres najdluzszego lancucha

#include <iostream>
#include <string>

using namespace std;

const int ArSize = 5;

template<typename T>						// na int i double - działa
T maxn(T tab[], int n); 

template<>							// na lancuch
string maxn(string arr[], int n);

int main()
{
	cout << "Program wyszukujacy najwieksza wartosc z tablicy.\n\n";

	int tabi[ArSize] = { 10,8,6,19,7 };
	double tabd[ArSize-1] = { 12.5, 5.3, 1.6, 15.1 };
	string tabc[ArSize] = { "Kowal", "Stolarz", "Murarz", "Piekarzy", "Stroz" };

	/*cout << "Najwieksza wartosc z tablicy liczb calkowitych to: " << maxn(tabi, ArSize) << endl;
	cout << "Najwieksza wartosc z tablicy liczb zmiennoprzecinkowych to: " << maxn(tabd, (ArSize -1)) << endl;*/
	
	cout << "a jego adres to: " << &(maxn(tabc, 5));

	cin.get();
	return 0;
}

template<typename T>					// na int i double - działa
T maxn(T tab[] , int n)					// szablon funkcji bez specjalizacji
{
	T m = tab[0];
	for (int i = 0; i <(n - 1); i++)
	{
		m = m >= tab[i + 1] ? m : tab[i + 1];
	}
	return m;
}

template<>					//	szablon ze specjalizacja 
string  maxn(string arr[], int n)		// dla lancuchow
{
	int k = 0;
	unsigned int maxlong = (arr[0].length()); 
	
	for (int i = 0; i <(n - 1); i++)
	{
		//  jezlie warunek nie jest spelniony to aktualizacja maxlong i parametru k
		maxlong >=(arr[i + 1].length()) ?  k = k :  k = i + 1;
		maxlong >=(arr[i+1].length()) ? maxlong = maxlong : maxlong = (arr[i + 1].length());
	}

	cout << "\nNajdluzszy lancuch z tablicy ma dlugosc " << maxlong <<
		"\na jego zawrtosc to " << arr[k];
	cout << "\nJest to elemnet nr " << k+1 << " w tablicy." <<endl;
	//cout << " a adres to " << &arr[k] << endl; // samo wyswietlenie bez zwracania przez funckje
	
	return arr[k];
}
