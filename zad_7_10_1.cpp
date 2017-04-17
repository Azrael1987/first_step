// zad_7_10_1.cpp - 159 - zadanie 10 z rodzialu 7 - funkcja korej parametrem jest inna funkcja

#include <iostream>
#include <cstdlib>
using namespace std;
typedef double(*p_fun)(double x, double y);		// wproawdznie wskaznika jako typ tozsamy z funkcja

double add(double x, double y);
double minus1(double x, double y);
double mal(double x, double y);
p_fun pf = add;
p_fun pf2 = minus1;
p_fun pf3 = mal;

void show_menu();

double calculate(double x1, double y1, p_fun pf);

int main()
{
	double x;
	double y;
	int n;
	cout << "Ile dzialan chcesz wykonac ?\n";
	cin >> n;
	show_menu();
	for (int i = 0; i < n; i++)
	{
		char choice;
		cout << "podaj rodzaj obliczen: ";
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
				cout << x << " + " << y << " = " << q << endl;
				break;
			}
			case 'm':
			{

				double q = calculate(x, y, minus1);
				cout << x << " - " << y << " = " << q << endl;
				break;
			}
			case 'r':
			{
				double q = calculate(x, y, mal);
				cout << x << " * " << y << " = " << q << endl;
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
	cout << " Wybierz dostepne  dzialania:\n";
	cout << " a) dodawanie\n";
	cout << " m) odejmowanie\n";
	cout << " r) mnozenie\n";
	cout << " q) wyjscie\n ";
}

double add(double x, double y)
{
	return x + y;
}

double mal(double x, double y)
{
	return x * y;
}

double minus1(double x, double y)
{
	return x - y;
}

double calculate(double x, double y, p_fun pf)
{
	double t = pf(x, y);
	return t;
}
