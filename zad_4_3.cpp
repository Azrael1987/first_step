// zad_4_3.cpp -- zad 3  rodzial 4

#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string name;
	string surname;

	cout << "Podaj swoje imie: \n";
	getline(cin, name);
	cout << "Podaj swoje nazwisko: \n";
	getline(cin, surname);
	cout << "Oto inforamcje zestawione w jeden napis: " << surname << ", " << name << endl;
	cin.get();
	return 0;
}
