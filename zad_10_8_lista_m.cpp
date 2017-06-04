// zad_10_8_lista_m.cpp -- (206) - zadanie  8 z rodzialu 10 - przykładowa lista 1 kierunkowa
// kompilowac razem z  zad_10_8_lista.cpp

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include "zad_10_8_lista.h"

int main()
{
	using namespace std;
	char choice;
	string last_name;
	list_1 *root = NULL; // wskaznik ustawiony na 1 el listy

	cout << "Twoje lista gosci:\n"
		<< "Dozwolone operacje na liscie:\n"
		<< "d - dodanie osoby\n"
		<< "s - wyszukanie osoby\n"
		<< "w - wypisanie wszystkich osob\n"
		<< "u - skreslenie z listy\n"
		<< "q - koniec programu\n";

	while (cin >> choice && (toupper(choice) != 'Q'))
	{
		switch (choice)
		{
		case 'D':
		case 'd':
			{
			add(&root);
			break;
			}
		case 's':
		case 'S':
			{
			cout << "Podaj nazwisko do wyszukania: ";
			cin >> last_name;
			search(root, last_name);
			break;
			}
		case 'w':
		case 'W':
		{
			show_all(root);
			break;
		}
		case'u':
		case 'U':
		{
			cout << "Podaj nazwisko do usuniecie z listy: ";
			cin >> last_name;
			if (!del(&root, last_name))
				cout << "Nie odnaleziono na liscie osoby o nazwisku " << last_name << endl;
			else
				cout << "Osoby o nazwisku " << last_name << " zostala usunieta z listy." << endl;
			break;
		}
		case 'q':
		case 'Q':
		{
			cout << "Do widzenia.";
			system("pause");
			exit(EXIT_FAILURE);
		}
		default:
			cout << "Wybierz jedna z ponizszych opcji:\n"
				<< "d - dodawanie, s - wyszukiwanie, w - wypisanie calej listy lub u - usuwanie\n";
			break;
		}
	}

	return 0;

}
