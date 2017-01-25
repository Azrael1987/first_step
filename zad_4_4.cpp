// zad_4_4.cpp -- zad 4 rodzial 4 (odwrócone zadania 3 z 4)
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name [ArSize];
	char surname[ArSize];
	
	cout << "Podaj swoje imie: " << endl;
	cin.getline(name, ArSize);
	cout << "Podaj swoje nazwisko: " << endl;
	cin.getline (surname, ArSize);
	cout << "Oto zestawienie informacji: " << surname << ", " << name << endl;
	cin.get();
	return 0;
}
