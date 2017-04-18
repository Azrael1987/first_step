// zad_7_10_2.cpp - 158 - zadanie 10 z rodzialu 7 - funkcja ktorej parametrem jest inna funkcja - wskaznik do tab z 3 funkcjami

#include <iostream>
#include <cstdlib>
using namespace std;
typedef double(*p_fun)(double x, double y);		// wprowadznie wskaznika jako typ tozsamy z funkcja
//typedef const double *()

double add(double x, double y);			// prototypy funkcji
double minus1(double x, double y);
double mal(double x, double y);

p_fun pf = add;			// wskazniki do funkcji
p_fun pf2 = minus1;
p_fun pf3 = mal;

p_fun tabp[3] = { pf, pf2, pf3 }; // tab 3 wskaznikow  do 3 funkcji

//double  (*tabp[3]) (double , double )  = {pf, pf2, pf3};		


p_fun (*pd)[3] = &tabp;		 // pd wskazuje na tablice  3 wskaznikow			
//p_fun (*pa[3])(double, double);

void show_menu();

double calculate(double x1, double y1, p_fun pa);			// pobiera 2 wart double i wskaznik na funkcjie
double cal2(double x2, double y2, p_fun pd);				// pobiera 2 wart double i wskaznik na tab wskaznikow na funkcje

int main()
{
	double x;
	double y;
	int n;
	cout << "Ile dzialan chcesz wykonac ?\n";
	cin >> n;
	//show_menu();
	for (int i = 0; i < n; i++)
	{
		char choice;
		cout << "\npodaj rodzaj obliczen: ";
		show_menu();
		cin >> choice;
		if (choice == 'q')
		{
			exit(EXIT_FAILURE);
		}

		cout << "Podaj X: ";
		cin >> x;
		cout << "Podaj Y: ";
		cin >> y;
		switch (choice)
		{
		case 'a':
		{
			double q = calculate(x, y, add);
			cout << q << endl;
			break;
		}
		case 'm':
		{

			double q = calculate(x, y, minus1);
			cout << q << endl;
			break;
		}
		case 'r':
		{
			double q = calculate(x, y, mal);
			cout << q << endl;
			break;
		}
		case 'e':
		{
			double q2 = cal2(x, y, add);
			break;
		}
		case 'q':
		{
			exit(EXIT_FAILURE);
		}
		default:
		{
			show_menu();
			cin >> choice;
		}

		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	exit(EXIT_FAILURE);
	return 0;
}

void show_menu()
{
	cout << " \nWybierz dostepne dzialania:\n";
	cout << " a) dodawanie\n";
	cout << " m) odejmowanie\n";
	cout << " r) mnozenie\n";
	cout << " e) wszystkie dzialania pokoleji\n";
	cout << " q) wyjscie\n ";
}

double add(double x, double y)
{
	cout <<endl << x << " + " << y << " = ";
	return   x + y;
}

double mal(double x, double y)
{
	cout <<endl<< x << " * " << y << " = ";
	return x * y;
}

double minus1(double x, double y)
{
	cout << endl << x << " - " << y << " = ";
	return x - y;
}

double calculate(double x, double y, p_fun pf)
{
	double t = pf(x, y);
	return t;
}

double cal2(double x2, double y2, p_fun pd)
{
	double t2;
	for (int i = 0; i < 3; i++)
	{
		t2 = tabp[i](x2, y2);
		cout << t2;
	}
	return  t2;
}
