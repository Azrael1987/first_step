// zad_10_5a.hpp - 201 - zadanie 5 z rodzialu 10 - definicje klasy i struktury przechowywanej na stosie

#ifndef ZAD_10_5A_HPP
#define ZAD_10_5A_HPP
#include<iostream>

//klasy
class Stack
{
public:
	//struktury
	struct customer
	{
		char fullname[35];
		double payment;
	};

	customer * ps;
	Stack();		// kostryktor domyslny
	~Stack();		// destruktor domyslny
	void show();
	bool push(const customer * ps);		// dodaje struktre na stos

	bool pop(customer * ps);		// zdejmuje  element ze stosu

private:
	// stałe
	enum { MAX = 10 };
	double sum_out;				// suma zdjetych platnosci
	double sum_in;				// suma przyjetycj platnosci


	//tablice przechowuje elementy stosu
	customer items[MAX];
	int top; // indeks szczytowego elementu stosu

};

#endif
