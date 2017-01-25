// Zad_4_10.cpp -- zadanie 10 z rodzialu 4

#include <iostream>
#include <array>

int main()
{
	using namespace std;

	array<double, 3> time;	// tablicza array na wyniki biegu
	double average;			// zmienna average na srednia czasow

	cout << "Podaj I czas: " << endl;
	cin >> time[0];
	cout << "Podaj II czas: " << endl;
	cin >> time[1];
	cout << "Podaj III czas: " << endl;
	cin >> time[2];

	average = (time[0] + time[1] + time[2]) / 3;
	cout << "Srednia Twoich czasow to: " << average << endl;

	cin.get();
	cin.get();
	return 0;
}
