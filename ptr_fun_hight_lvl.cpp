// ptr_fun_hight_lvl.cpp -- (144) - 7.19 - tablica wskaznikow do funkcji

#include <iostream>

// rozne zapisy, efektywnie te same sygnatury
const double * f1(const double ar[], int n);
const double * f2(const double[], int);
const double * f3(const double *, int);

int main()
{
	using namespace std;

	double av[3] = { 111.2, 1542.6, 2227.9 };

	//wskaznik do funkcji
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;				// automatyczna dedukcjatypow z c++11
	// w C++98 mozna uzycnastepujacej deklaracji: - const double *(*p2)(const double *, int) =f2;

	cout << "Uzywanie wskaznikow do funkcji:\n";
	cout << "adres\t wartosc zwracana\n";
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3);

	// pa  to tablica wskaznikow
	// auto nie dziala  przy inicjalizoacji lista
	const double *(*pa[3])(const double *, int) = { f1,f2,f3 };
	// ale dziala przy incjalizacji pojedyncza wartoscia
	
	//pb to wskaznik do pierwszego elementu pa
	auto pb = pa;
	// w C++98  mozna zastoswoawac deklaracje - const double *(**pb)const double *, int) = pa

	cout << "\n\nUzywanie tablicy wskaznikow do funkcji:\n";
	cout << "adres\t wartosc wskaznika do wskaznika do funkcji:\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;

	cout << "\nUzywanie wskaznika do wskaznika do funkcji:\n";
	cout << "adres\t wartosc zwracana\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	
	cout << "\nUzywanie wskaznikow do tablicy wskaznikow do funkcji: \n";
	cout << "adres\t wartosc zwracana\n";
	auto pc = &pa;		// prosty sposob deklaracji pc
	// w c++98 mozna uzyc deklaracji - const double *(*(*pc)[3](const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	// trudneijszy sposob deklaracji pd
	const double *(*(*pd)[3])(const double *, int) = &pa;

	//zapisawanie koncowej wartosci w pdb
	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	// alternatywnie
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;

	cin.get();
	return 0;
}

// kilka funkcji  do wypenienia porgramu
const double * f1(const double ar[], int n)
{
	return ar;
}

const double * f2(const double ar[], int n) // tu juz nie mozna  skracac pomijajac nazwe tablicy
{
	return ar + 1;
}

const double * f3(const double ar[], int n)	// tu juz nie mozna skracac zastepujac tablice  symbolem wskaznika
{
	return ar + 2;
}
