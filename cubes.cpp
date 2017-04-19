// cubes.cpp - 164 - listing 8.5 - parametry zwykle i referencyjne

#include <iostream>

double cube(double a);					// uzycie zniennej
double cuberef(double &ra);				// uzycie referencji
double cuberef2(const double &rb);		// proba uzycia referencji stalej - w tym przypadku niemozliwa

int main()
{
	using namespace std;

	double x = 3.0;

	cout << cube(x);
	cout << " = szescia z " << x << endl;
	cout << cuberef(x);
	cout << " = szescian z " << x << endl;		// funkcja zmieni wartosc zmiennej x
	//cout << cuberef2(x);					// to sie nie skompiluje poniewaz const wymusza stalosc zmiennej refernecyjne
	//cout << " = szescian z " << x << endl;

	cin.get();
	return 0;
}

double cube(double a)
{
	a *= a *a;
	return a;
}

double cuberef(double &ra)
{
	ra *= ra * ra;
	return ra;
}
/*
double cuberef2(const double &rb)
{
	rb *= rb * rb;
	return rb;
}
*/
