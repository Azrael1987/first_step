// twoswap.cpp - (172) - listing 8.13 - specjalizacja nadpisuje szablon

#include <iostream>

template<typename T>
void Swap(T &, T &);

struct job
{
	char name[30];
	double salary;
	int floor;
};

// jawna specjalizacja
template<> void Swap<job>(job &j1, job & j2);

void Show(job & j);

using namespace std;

int main()
{
	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Uzycie  generowanej przez kompilator funkcji "
		"zamieniajacej wartosc int:\n";
	Swap(i, j);						// generuje void Swap (int &, int &)
	cout << "Teraz i, j = " << i << ", " << j << ".\n";

	job sue = { "Susan Yaffee", 73000.60, 7 };
	job sidney = { "Sidney Taffee",78060.72, 9 };
	cout << "Przed zmiana struktur job:\n";
	Show(sue);
	Show(sidney);

	Swap(sue, sidney);		// uzycie void Swap(job &, job &)
	cout << "Po zmianie struktur job:\n";
	Show(sue);
	Show(sidney);
	
	cin.get();
	return 0;
}

// zamienia cala zawartosc struktury
template<typename T>
void Swap(T &a, T &b)		// wersja ogolna
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

// zamienia tylko pola salary i floor
template<> void Swap<job>(job & j1, job & j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job & j)
{
	cout << j.name << ": " << j.salary << " zl na pietrze " << j.floor << endl;
}
