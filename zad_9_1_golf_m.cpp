// zad_9_1_golf_m.cpp -- 190 - zadanie 1 z rodzialu 9 
// kompilowac z zad_9_1_golf.cpp

#include <iostream>
#include<string>
#include "zad_9_1_golf.h"

extern const int Len;

golf jim;
golf ann;
golf tom;

int main()
{
	using namespace golf_ns;
	cout << "Program do rejstrowania ilosc punktow golfistow." << endl;

	golf ranking[ArSize];

	cout << "Liga Kobiet." << endl<<endl;
	cout << "Podaj imie i nazwisko gracza nr 1: ";

	string temp;
	getline(cin, temp);
		
		int j = 0;
		while (j < ArSize && ((temp.size())!=0))
		{
			cout << "Podaj ilosc punktow handicap gracza nr " << j+1 <<": ";
			int tempi;
			cin >> tempi;

			setgolf(ranking[j], temp, tempi);
			
			cout << "Podaj imie i nazwisko gracza nr " << j + 2<< ": ";
			cin.get();
			getline(cin, temp);
			j++;
		}
		cout << endl;
	for (int i = 0; i < j; i++)
	{
		showgolf(ranking[i]);
	}

	cout << "\nLiga mezczyzn." << endl;
	setgolf(tom);
	int hc;
	cout << "\nPodaj ilosc pukntow Jimiego:";
	cin >> hc;
	handicap(jim, hc);

	showgolf(tom);

	system("pause");
	return 0;
}
