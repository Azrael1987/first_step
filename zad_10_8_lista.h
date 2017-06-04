#ifndef ZAD_10_8_LISTA_H
#define  ZAD_10_8_LISTA_H
#include <iostream>
#include <string>

struct list_1
{
	std::string first_name;
	std::string last_name;
	list_1 * next;				// wskaznik na nastepna pozcyje z listy

	list_1()		// konsturktor
	{
		// wczytywanie danych do listy
		std::cout << "Podaj imie: ";
		std::cin >> first_name;
		std::cout << "Podaj nazwisko: ";
		std::cin >> last_name;

		next = NULL;
	}
	void show()
	{
		std::cout << "Imie: " << first_name << "\tNazwisko: " << last_name << std::endl;
	}
};

void add(list_1 **root);

void search(list_1 *root, std::string a);

void show_all(list_1 *root);

bool del(list_1 **root, std::string a);




#endif
