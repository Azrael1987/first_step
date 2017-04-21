// funtemp.cpp - (170) - listing 8.11 - uzycie szablonow funkcji

#include <iostream>

//prototyp szablonu funkcji
template<typename T>			// class T
void Swap(T &a, T &b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i <<" , "<< j <<".\n";
	cout << "Uzycie funkcji obslugujacej typ int, "
	"wygeneraowana przez kompilator: \n";
	Swap(i, j);
	cout << "Teraz i , j = " << i << " , " << j << ".\n";

	double x = 34.5;
	double y = 11.2;
	cout << "x, y = " << x << ", " << y << ". \n";
	cout << "uzycie funkcji obslugujacej typ double, "
		"wygenerowanej przez kompilator: \n";
	Swap(x, y);
	cout << "Teraz x, y = " << x << ", " << y << ".\n";

	cin.get();
	return 0;
}

//definiacja szablonu funkcji
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
