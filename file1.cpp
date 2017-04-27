// file1.cpp -- 182 - listing 9.2
// głowny plik zordlowy do przykaldowego programu trzyplikowego
// skaldajacego sie z  file1.cpp , file2.cpp i coordin.h
// program przeliczajacy uklad wspolzednych biegunowych na prostokatne i odwrotnie
// converter Cartesian coordinates to polar ccrdinates and polar ccrdinates to Cartesian coordinates

#include <iostream>
#include <cstdlib>			// exit();

#include "coordin.h"		// zawiera deklaracje struktur i prototypy funkcji
using namespace std;

int main()
{
	show_menu();
	rect rplace;
	polar pplace;
	char temp;
	cin >> temp;

	while ((temp != 'q') && (temp != 'Q'))
	{
		if (temp == 'R' || temp == 'r')
		{
			cout << "Wybrales konwersje z ukladu biegunowego na prostokatny.\n\n";
			cout << "Podaj odleglosc oraz kat: ";
			if (cin >> pplace.distance >> pplace.angle)
			{
				rplace = polar_to_rect(pplace);
				show_rect(rplace);
				cout << "Wpisz dowolna litere aby wrocic do manu wyboru.\n";
			}

		}
		else if (temp == 'P' || temp == 'p')
		{
			cout << " wybrales konwersje z ukladu prostokatnego na biegunowy.\n\n";
			cout << "Podaj wspolrzedna X oraz wspolrzedna Y ";
			if (cin >> rplace.x >> rplace.y)
			{
				pplace = rect_to_polar(rplace);
				show_polar(pplace);
				cout << "Wpisz dowolna litere aby wrocic do manu wyboru.\n";
			}
		}
		else if (temp == 'q' || temp == 'Q')
		{
			cout << "Program zaraz zostanie zmakniety.";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.get();
			exit(EXIT_FAILURE);
		}

		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
		show_menu();
		cin >> temp;
	}

	cout << "Do zobaczenia :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
