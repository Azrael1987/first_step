// zad4_1.cpp -- rodzial 4 zadanie 1

#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	const int size = 25;
	char imie[size];
	char nazwisko[size];
	int ocena;
	int wiek;

	cout << "Jak masz na imie? " << endl;
	cin.getline(imie, size);
	cout << "Jak masz na nazwisko? " << endl;
	cin.getline(nazwisko, size);
	cout << "Na jaka ocene zaslujesz? " << endl;
	cin >> ocena;
	cout << "Ile masz lat? " << endl;
	cin >> wiek;

	cout << "Nazwko: " << nazwisko << ", " << imie << endl;
	cout << "Ocena: "<< ocena-1 << endl;
	cout << "Wiek: " << wiek << endl;
	cin.get();
	cin.get();
}
