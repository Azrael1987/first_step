// zad_10_1a.hpp - zadanie  1 z rodzialu 10 - (197) - definicja klasy do obslugi rachunku bankowego

#ifndef ZAD_10_1A_HPP
#define ZAD_10_1A_HPP
#include <string>
#include <iostream>

// klasy
class Bank
{
private:
	enum {LIMIT_MAX = 500000};
	double balance;						// saldo
	std::string account_number;			// numer konta
	std::string name;					// nazwisko wlasciciela konta

public:
	Bank(const std::string & name, const std::string & number, double deposit = 0.0);	// konstruktor pobierajacy nazwe klienta, numer rachunku i opcjonalnie kwote pierwszej wpłaty
	void deposit(double dep);									// zdeponowanie  pieneidzy na koncie
	void withdrawal(double withdra);							// podjecie pieniedzy z konta
	void show() const;
};

// prototypy funkcji
void menu();


#endif // !ZAD_10_1A_HPP

