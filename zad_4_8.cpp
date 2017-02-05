// zad_4_8.cpp -- zadanie 8 zrodzial 4

#include <string>
#include <cstring>
#include <iostream>

struct pizza
{
	char name[20];
	int size;
	double weight;
};

int main()
{
	using namespace std;

	pizza * pp = new pizza;

	cout << "Podaj rozmiar pizzy: " << endl;
	cin >> (*pp).size;
	cin.ignore();
	cout << "Wybrales nastepujaca pizze: " << endl;
	cin.get(pp->name, 20);				
	cout << "Podaj wage pizzy: " << endl;
	cin >> (*pp).weight;

	cout << "\n" << "Twoja pizza to: " << endl;
	cout << "Rozmiar pizzy to: " << (*pp).size << endl;
	cout << "Nazwa producenta: " << (*pp).name <<endl;
	cout << "Waga pizzy to: " << (*pp).weight << endl;

	delete pp;

	cin.get();
	cin.get();
	return 0;
}
