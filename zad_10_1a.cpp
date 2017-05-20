// zad_10_1a.cpp - (197) - definicja metod do klasy Bank
// kompilować razem z zad_10_1b.cpp
#include "zad_10_1a.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Bank::Bank(const std::string & person, const std::string & number, double deposit)
{
	name = person;
	account_number = number;
	balance = deposit;
	std::cout << "\nPanie " << person << " zalozyl Pan konto w naszym banku.\n";
}

void Bank::deposit(double dep)
{
	if (balance + dep <= LIMIT_MAX)
	{
		balance += dep;
		std::cout << "Wplata zostala przyjeta.\n";
	}
	else 
	{
		std::cout << "Przekroczyles limit swojego konta.\n";
		cout << fixed;
		cout.precision(2);
		cout.setf(ios_base::showpoint);
		std::cout << "Dokonaj wplaty na maksymanie " << (LIMIT_MAX - balance) << "zl.\n";
	}
}

void Bank::withdrawal(double withdra)
{
	if (withdra <= balance)
	{
		balance -= withdra;
		std::cout << "Wyplata zostala zrealizowana.\n";
	}
	else
	{
		std::cout << "Nie masz wystarczajacych srodkow na koncie.\n";
		cout << fixed;
		cout.precision(2);
		cout.setf(ios_base::showpoint);
		std::cout << "Dokonaj wyplaty na maksymanie " << balance <<" zl.\n";
	}
}

void Bank::show() const
{
	std::cout << "Nazwa klienta: " << name << std::endl;
	std::cout << "Numer rachunku: " << account_number << std::endl;
	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	std::cout << "Saldo rachunku: " << balance << "zl.\n";
}

void menu()
{
	{
		std::cout << "\nPANEL STEROWANIA KONTEM\n\n";
		std::cout << "wybierz D aby zdeponowac gotowke.\n";
		std::cout << "wybierz P aby podjac gotowke.\n";
		std::cout << "Wybierz S aby zobaczyc czesgoly konta\n";
		std::cout << "Wybierz K aby zakonczyc operacje na ranku bankwym\n";
	}
};
