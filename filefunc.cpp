// filefunc.cpp - (167) - listing 8.8 - funkcja korzystajaca z parametru ostream &

#include <iostream>
#include <fstream>			// zapis i otwieranie plikow
#include <cstdlib>			// do formatowania wynikow

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);

const int LIMIT = 5;

int main()
{
	ofstream fout;
	const char * fn = "ep-data.txt";
	fout.open(fn);			// otwieranie pliku
	if (!fout.is_open())
	{
		cout << "Nie moge otworzyc " << fn << ". Do widzienia.\n";
		exit(EXIT_FAILURE);
	}
	double objective;
	cout << "Podaj ogniskowe teleskopu w milimetrach. \n";
	cin >> objective;
	double eps[LIMIT];
	cout << "Podaj ogniskowe (w mm) " << LIMIT << " okularow:\n";
	for (int i = 0; i < LIMIT; i++)
	{
		cout << "Okular nr " << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Gotowe\n";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n)
{
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);		// zachowaj formatowanie poczatkowe (aktualne)
	os.precision(0);
	os << "Ogniskowa obiektywu: " << fo << "mm\n";
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "\nf okularu";
	os.width(15);
	os << "Powiekszenie" << endl;
	for (int i = 0; i < n; i++)
	{
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);		// przywrocenie poczatkowych ustawien formatowania - zdefiniowanych na poczatku funkcji
}
