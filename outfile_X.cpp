// outfile_X.cpp -- zaspis do pliku wg Praty - obiektowo -- listing 6.15 (115)
#include <iostream>
#include <fstream>

int main()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outFile;		//X -utworzenie obiektu na wyniki o nazwie outFile - lepsze rozwiazanei niz fstream - zmienna plikowa
	outFile.open("carinfo.txt", ios::out | ios::app);	//X - powiazanie obiektu z plikiem , zapisuj | aktualizuj

	cout << "Podaj marke i model samochodu: ";
	cin.getline(automobile, 50);
	cout << "Podaj rok produkcji: ";
	cin >> year;
	cout << "Podaj cene wyjsciowa: ";
	cin >> a_price;
	d_price = 0.93 * a_price;

	// za pomoca cout pokaz infrmacje na ekranie

	cout << fixed;
	cout.precision(2);			// dokladnosc do 2 miejsc po przecinku
	cout.setf(ios_base::showpoint);
	cout << "\nMarka i model: " << automobile << endl;
	cout << "Rok produkcji: " << year << endl;
	cout << "Cena wywolwcza w zl: " << a_price << endl;
	cout << "Cena biezaca: " << d_price << endl;

	// dokladnie to sam zrobimy z outFile zamiast cout

	outFile << fixed;
	outFile.precision(2);	// dokladnosc do 2 miejsc po przecinku
	outFile.setf(ios_base::showpoint);
	outFile << "\nMarka i model: " << automobile << endl;
	outFile << "Rok produkcji: " << year << endl;
	outFile << "Cena wywolwcza w zl: " << a_price << endl;
	outFile << "Cena biezaca: " << d_price << endl;

	outFile.close();		// zamkniecie pliku po zakoczeniu zapisu

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
