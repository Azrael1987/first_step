// newstrct.cpp -- operator new i structury
#include <iostream>
struct inflatable // definicja struktury
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable * ps = new inflatable; // alokacja pamieci na strukturę
	cout << "Podaj nazwe dmuchanej zabawki: ";
	cin.get(ps->name, 20); // metoda 1. dostepu do pól
	cout << "Podaj objetosc w stopach szesciennych: ";
	cin>>(*ps).volume; // metoda 2. dostepu do pól
	cout << "Podaj cene (zl): "; 
	cin >> ps->price;
	cout << "Nazwa: " << (*ps).name << endl;// metoda 2.
	cout << "Objetosc: " << ps->volume << " stop szesciennych\n"; // metoda 1.
	cout << "Cena: " << ps->price << " zlotych" << endl; // metoda 1.
	delete ps; // zwolnienie pamieci
	cin.get(); 
	cin.get();
	cin.get();
	return 0;
