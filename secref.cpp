// secref.cpp - (162) - listing 8.3 -- definiowanie i stosowanie referencji 

#include <iostream>

int main()
{
	using namespace std;

	int rats = 101;
	int & rodents = rats;		// rodents to referencja

	cout << "rats = " << rats;
	cout << ", rodentas = " << rodents << endl;
	
	cout << "adres rats = " << &rats;
	cout << ", adres rodents = " << &rodents << endl;

	int bunnies = 50;
	rodents = bunnies; // proba zmian referencji skutkujaca  przypisaneim wartosci a nie zmiane referencji

	cout << "bunnies = " << bunnies;
	cout << ", rats = " << rats;
	cout << ", rodentas = " << rodents << endl;

	cout << "adres bunnies = " << &bunnies;
	cout << ", adres rats = " << &rats;
	cout << ", adres rodents = " << &rodents << endl;

	cin.get();
	return 0;
}
