// choices.cpp - (174) - listing 8.15 - wybór szablonu  - prowokowanie dospasowania

#include <iostream>

template<class T>			// definicja szablonu z pominiecem portotypu
T lesser(T a, T b)			// # 1
{
	return a < b ? a : b;
}
							// definicja funkcji z pominiecem portotypu
int lesser(int a, int b)	// #2
{
	a = a < 0 ? -a : a;
	b = b < 0 ? -b : b;
	return a < b ? a : b;
}

int main()
{
	using namespace std;
	int m = 20;
	int n = -30;
	double x = 15.5;
	double y = 25.9;

	cout << lesser(m, n) << endl;		// # 2
	cout << lesser(x, y) << endl;		// # 1 - z double jako T
	cout << lesser<>(m, n) << endl;		// # 1 - z int jako T - <> wymusza uzycie szablonu
	cout << lesser<int>(x, y) << endl;  // # 1 - z int jako T - jawna specjalizacja

	cin.get();
	return 0;
}
