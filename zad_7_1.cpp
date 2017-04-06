// zad_7_1.cpp -- (145) - zad 1 z rodzialu 7 - funkcja liczaca srednia harmoniczna - Z=2*x*y/(y+x)

#include <iostream>
using namespace std;
double n1;
double n2;
double sr_har(double n1, double n2);

int main()
{
	
	cout << "Podaj 1 liczbe: ";
	cin >> n1;
	cout << "Podaj 2 liczbe: ";
	cin >> n2;

	while ((n1 != 0) && (n2 != 0))
	{
		cout << "Srednia harmoniczna z " << n1 << " i " << n2 << " wynosi: ";
		sr_har(n1, n2);
		cout << "\n\nPodaj 1 liczbe: ";
		cin >> n1;
		cout << "Podaj 2 liczbe: ";
		cin >> n2;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

double sr_har(double n1, double n2)
{
	double av = 0.0;
	av = 2.0*n1*n2 / (n1 + n2);
	cout << av << endl;
	return av;
}
