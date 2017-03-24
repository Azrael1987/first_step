// zd_6_5.cpp -- zadanie 5 z rodzialu 6 - system podatkowy z menu i swit

#include <iostream>

using namespace  std;

void showmenu();
int main()
{
	showmenu();

	float free_tax = 5000.00;		// granica podatku 0%
	double type_tax_1 = 15000.00;	// granica podatku 10%
	double type_tax_2 = 35000.00;	// granica podatku 15% 

	double salary = 0.0;			// wynagrodzenie
					
	int tax_threshold = 0;				// prog podatkowy - 0, 1, 2, 3

	cin >> salary;

	while (cin)
	{
		double tax_1 = (type_tax_1 - free_tax) *0.1;	// nalezny podatek przy dochodach z 3  przedzialu wg stawki z podatkiem 10% (nr 2)
		double tax_2 = (type_tax_2 - type_tax_1) *0.15;	// nalezny podatek przy dochodach z 4  przedzialu wg stawki z podatkiem 15% (nr 3)
		double tax_3 = (salary - type_tax_2) *0.2;		// nalezny podatek przy dochodach z 4  przedzialu wg stawki z podatkiem 20% (nr 4)
		
		
		if (salary > free_tax && salary <= type_tax_1)
			tax_threshold = 1;
		else if (salary > type_tax_1 && salary <= type_tax_2)
			tax_threshold = 2;
		else if (salary > type_tax_2)
			tax_threshold = 3;
		else if (salary >= 0 && salary < free_tax)
			tax_threshold = 0;
		else
		{
			cout << "Wynagrodzenie nie moze byc ujemne\a." << endl;
			exit(EXIT_FAILURE);
		}

		double tax = 0.0;

		switch (tax_threshold)
		{
		case 3: tax = tax_3 + tax_2 + tax_1; break;
		case 2: tax = (salary - type_tax_1)*0.15 + tax_1; break;
		case 1: tax = (salary - free_tax)*0.1; break;
		case 0:  break;
		}

		cout <<fixed;
		cout.precision(2);
		cout.setf(ios_base::showpoint);
		cout << "\nPrzy wynagrodzeniu " << salary << " podatek do zaplaty to: " << tax << " zl\n";

		showmenu();
		cin >> salary;
	}
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
void showmenu()
{
	cout << "Podaj swoje wynagrodzneie ";
	cout << "lub wcisnij \'q\' aby zmaknac program:\n\n";
}
