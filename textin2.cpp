// textin2.cpp -- wczytywanie znakow  w petli while + petla opzniajaca wylaczenie
#include<iostream>
#include <ctime>	//zawiera deklarcje funkcji clock() i typu clock_t
int main()
{
	using namespace std;
	char ch;        // zmienna literowa
	int count = 0;      // licznik wprowadzanych znakow

	cout << "Podaj tekst do wprowadzenia; # konczy ciag znakow." << endl;
	cin.get(ch);

	while (ch != '#')
	{

		cout << ch;      //wyswietl znak
		++count;        //dolicz znak
		cin.get(ch);    //pobierz nastepny znak

	}
	cout << "\nWprowadziles " << count << " znakow" << endl;
	cin.get();
	cin.sync();

	float secs = 5;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;  //	konwersja na jednostyki systemowe
	cout << "\nZaczynamy\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "gotowe \a\n";
	return 0;
}
