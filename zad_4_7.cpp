//zad_4_7.cpp -- zadanie 7 rozdzial 4

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;
const int ArSize = 30;
struct pizza
{
	string name;
	int size;
	double weight;
};

int main()
{
	using namespace std;

	pizza wherehouse[100];

	cout << "Podaj nazwe producenta pizzy: " << endl;
	getline (cin, wherehouse[0].name);
	cout << "Podaj rozmiar pizzy: " << endl;
	cin >> wherehouse[0].size;
	cout << "Podaj wage pizzy: " << endl;
	cin >> wherehouse[0].weight;

	cout << "\n" <<"Twoja pizza to: " << endl;
	cout << "Nazwa producenta: " << wherehouse[0].name << endl;
	cout << "Rozmiar pizzy to: " << wherehouse[0].size<< endl;
	cout << "Waga pizzy to: " << wherehouse[0].weight << endl;
	cin.get();
	cin.get();
    return 0;
}
