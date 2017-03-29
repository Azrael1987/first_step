// protos.cpp -- listing  7.2 - (127) - prototypy i wywolania funkcji

#include <iostream>
#include <limits>

void cheers(int);					// prototyp: brak wartosci zwracanej
double cube(double x);				// prototyp: zwraca wartosc typu double
int main()
{
	using namespace std;
	cheers(5);						// wywolanie funkcji
	cout << "Podaj liczbe: ";
	double side;
	cin >> side;
	double volume = cube(side);		// wywolanie funkcji
	cout << "Kosta majaca bok " << side << " cm ma poejmnosc ";
	cout << volume << " cm^3\n";
	cheers(cube(2));				// dziala ochrona prototypu
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void cheers(int n)					// jesli  funkcja nie zwraca  wartosci to return opcjonalny
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Czesc ";
	}
	cout << endl;
}

double cube(double x)				// jesli  funkcja  zwraca  wartosci to koniczny jest return 
{
	return x*x*x;
}
