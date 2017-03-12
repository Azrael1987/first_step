// zad_5_7.cpp -- zadanie 7 z rodzialu 5 - dynamiczna sturktury do katalogowania samochodów

#include<iostream>
#include<string>


int main()
{
	using namespace std;

	int n;

	struct vehicle			// definicja struktury
	{
		string name;
		int year;
	};
	cout << "Podaj ilosc aut do skatalogowania: ";
	cin >> n;
	
	vehicle * ps = new vehicle[n];			// alokacja miejsca na strukture

	for (int i = 0; i < n; i++)
	{
		cout << "\nSamochod nr " << i + 1 << endl;
		cout << "Podaj marke samochodu: ";
		cin.ignore();
		getline(cin, ((ps + i)->name));     
		cout << "Podaj rok produkcji: ";
		cin >> (ps+i)->year;
		//cin.get();
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (ps + i)->name << " " << (ps + i) -> year << ".\n";
	}

	cin.get();
	cin.ignore();
	return 0;
}
