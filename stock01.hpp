// stock01.hpp -- (194) - Listing 10.4 - deklaracja Stock z konstrukotrami i destruktorami
#ifndef STOCK01_HPP
#define STOCK01_HPP
#include <iostream>

class Stock
{
private:
	std::string company;
	long shares;
	double shares_val;
	double total_val;
	void set_tot() { total_val = shares * shares_val; }
public:
	// dwa konstruktory
	Stock();		// konstruktor domyslny
	Stock(const std::string & co, long n = 0, double pr = 0.0);
	~Stock();		// "halasliwy" destruktor
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();
};
 
#endif
