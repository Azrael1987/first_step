// stock02.hpp - (195) - Listing 10.7 
// dekaracja klasy Stock z konsturktorami i destruktorami z wykozystywaniem 2 obiektow w metodzie.

#ifndef STOCK_02_HPP_
#define STOCK_02_HPP_

#include <iostream>
#include <string>

class Stock
{
private:
	std::string company;
	long shares;
	double shares_val;
	double total_val;
	void set_tot() { total_val = shares_val * shares; }
public:
	Stock();		// konstruktor domyslny
	Stock(const std::string & co, long num = 0, double price = 0.0);
	~Stock();		// destruktor
	void sell(long num, double price);
	void buy(long num, double price);
	void update(double price);
	void show() const;			// const za zawiasem swiadczy o tym ze funkcja jest nei modyfikujaca
	const Stock & topval(const Stock & s)const;		// metoda wykozystujaca 2 obiekty - janie w () i nie jawnie w samej metodzie z ktorej wywolany jest 2 obiekt
};

#endif
