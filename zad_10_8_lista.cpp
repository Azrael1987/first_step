// zad_10_8_lista.cpp -- (206) - zadanie  8 z rodzialu 10 - przykładowa lista 1 kierunkowa
// kompilowac razem z  zad_10_8_lista_m.cpp

#include <iostream>
#include <string>
#include "zad_10_8_lista.h"

void add(list_1 ** root)
{
	list_1 * new_l = new list_1;		// tworzenie nowejgo el listy
	list_1 * helper = (*root), (*helper_1) = NULL;	// wskazniki pomocnicze do 

	while (helper != NULL && ((helper->last_name).compare(new_l->last_name) == -1))			// compare - porównianie zawratosci  wskaznikow
	// zabezpiecznie przed wyjscie poza liste
	{
		helper_1 = helper;		// wskaznik pomocniczy_1 wskazuje na podstawowy wskaznik pomocniczy
		helper = helper->next;	// przesuniecie wskaznika na nastepny el listy
		std::cout << " \ntest 0";
	}

	if (helper != NULL && ((helper->last_name).compare(new_l->last_name) == 0))
		// zabezpiecznie przed zdublowaniem  nazwiska na liscie
	{
		std::cout << "Osoba o nazwisku: " << new_l->last_name << "juz jest na liscie.\n";
		delete new_l; // usuwanie nowego el z listy
		std::cout << " \ntest 1";
	}
	else if (((*root) == NULL) || (helper == (*root) && (helper->last_name).compare(new_l->last_name) == 1))		// nowy element bedzie korzeniem listy
	{
		new_l->next = (*root);
		(*root) = new_l;
		new_l->next = NULL;			// tu dopisalem linie
		std::cout << " \ntest 2";
	}
	else
	{
		helper_1->next = new_l;
		new_l->next = new_l;
		std::cout << " \ntest 3";
	}

}

void search(list_1 * root, std::string a)
{
	while (root != NULL && (root->last_name).compare(a) != 0)
		//dopoki nie znajdzie elementu na liscie lub nie dojdzie do konca listy
	{
		root = root->next;
	}
	if (root == NULL)
		std::cout << "Nie ma na liscie elementu " << a << ".\n";
	else
		root->show();
}

void show_all(list_1 * root)
{
	std::cout << "\nZawartosc listy: \n\n";
	if (root == NULL)
		std::cout << "Lista jest pusta";
	while(root != NULL)
	{
		root->show();		// wypisanie  el z listy
		root = root->next;	// przesuniecie wskaznika na  nastepny element z listy
	}
}

bool del(list_1 ** root, std::string a)
{
	if ((*root)== NULL) // lista jest pusta
	return false;
	list_1 * helper = (*root), (*helper_1) = NULL;		// wskazniki pomocnicze

	while (helper != NULL && (helper->last_name).compare(a) != 0)
		//dopoki nie znajdzie elementu na liscie lub nie dojdzie do konca listy
	{
		helper_1 = helper;
		helper = helper->next;
	}

	if (helper == NULL)	// opuszcenie listy - el do usuniecia nie istnieje
		return false;
	else if (helper == (*root)) // usuwa el z konca listy
	{
		(*root) = (*root)->next;
		delete helper;
	}
	return true;
}
