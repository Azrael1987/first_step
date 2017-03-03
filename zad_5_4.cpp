// zad_5_4.cpp -- porownywarka oprocentowania w skali rodu do procentu skladanego

#include<iostream>
#include<cmath>	// bibliotego zawierajaca klase  round, floor, ceil - umowzliwiaja zaokraglenie naturalne, w dol i w gore
#include<iomanip> //bilioteka zawierajaca klase setprecision - umozliwiajaca zdefiniowanie ilosci miejscpo przecinku i blokujaca tryb wykladniczy
//#include<cstdlib>
int main()
{
	using namespace std;
	double a = 100;			//kapital z oprocentowaniem w skali roku
	double b = 100;			// kapital z procentem skladanym
	int i = 1;
	double A = 1.1*a;
	double B = 1.05*b;
	cout << "Po pierwszym roku Dafne bedzie miala: " << A << "zl. A Cleo: " << B << " zl."<<endl;
	cout.precision(5);
	do 
	{
		i++;
		A = (A + 0.1*a);
		B = (B*1.05);

		cout << "Po " << i << " latach Dafne bedzie miala: " << fixed << setprecision(2) << A << "zl. A Cleo: " << fixed << setprecision(2) << B << " zl." << endl;
		
	} while (A > B);
	cout << "\nJak widac juz po " << i << " latach Cleo bedzie miala wiecej oszczednosci niz Dafne." << endl;

	cin.get();
	return 0;
}
