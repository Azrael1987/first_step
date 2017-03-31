// arrfun4_X.cpp -- (133) - listing 7.6 - funkcje i zakres tablicy z wykozystaniem wskaznikow

#include <iostream>

const int ArSize = 8;
int sum_arr(const int * begin, const int * end);
int main()
{
	using namespace std;
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };

	int sum = sum_arr(cookies, cookies + ArSize);
	cout << "Zjedzono " << sum << " ciastek.\n";
	sum = sum_arr(cookies, cookies + 3);
	cout << "4 pierwsze osoby zjadly: " << sum << " ciastek.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	cout << "Ostatnich czworo zjadlo " << sum << " ciastek.\n";
	cin.get();
	return 0;
}

int sum_arr(const int * begin, const int * end)
{
	const int * pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
	{
		total = total + *pt;
	}
	return total;
}
