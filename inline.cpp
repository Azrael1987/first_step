// inline.cpp -- 160 - uzycie funkcji inline

#include <iostream>

// definicja funkcji inline
inline double square(double x) { return x * x; }

int main()
{
	using namespace std;
	double a, b;
	double c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c;
	cout << ", c kwadrat = " << square(c++) << endl;
	cout << "Teraz c = " << c << endl;
	cin.get();
	return 0;
}
