// ifelseif.cpp -- uzycie if else if else -- listing 6.3
#include <iostream>

int main()
{
	using namespace std;

	const int Fave = 45;		// ulubiona liczba
	int n;						// wartosc podana przez uzytkownika

	cout << "Znajdz moja ulubiona liczbe od 1 do 100.\n";

	do
	{
		cin >> n;
		if (n > Fave)
		{
			cout << "Za duzo.\n";
		} 
		else if (n < Fave)
		{
			cout << "Za malo.\n";
		}
		else
		{
			cout << "Brawo " << Fave << " jest moja ulubiona liczba.\n";
		}
	} while (n != Fave);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
