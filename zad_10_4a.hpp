// zad_10_4a.hpp - (200) - zadanie 4 z rodzialu 10 - dekalracja klasy z przestrzenia nazw

#ifndef ZAD_10_4A_HPP 
#define ZAD_10_4A_HPP 
#include <iostream>

namespace SALES
{
	//stale
	static const int QUARTERS = 8;
	
	//nazwy udostepniane w przestrzeni nazw SALES
	using std::endl;
	using std::cout;
	using std::cin;

	//klasy
	class Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;

	public:
		Sales(int n=8);
		void showSales();
	};
}

#endif
