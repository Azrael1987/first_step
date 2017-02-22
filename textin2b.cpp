// textin2b.cpp -- wczytywanie znakow  w petli while 
#include<iostream>

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

	cin.ignore(numeric_limits<streamsize>::max(), '\n');		// funkcja
	cin.get();
	return 0;
}
