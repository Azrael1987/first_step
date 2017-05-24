// zad_10_3a.hpp -- 199 - zadanie 3 z rodzialu 10

#ifndef ZAD_10_3_HPP
#define ZAD_10_3_HPP
#include <iostream>
#include <string>

// stale
extern const int Size;

// klasy
class Golf2
{

private:

	std::string fullname;
	int handicap;

public:
	Golf2();

	~Golf2();

	Golf2(const std::string & name, int hc = 0);
	
	void score_update(int hc);
	void showgolf();

};

#endif 
