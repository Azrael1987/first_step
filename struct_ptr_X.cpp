// struct_ptr_X.cpp -- (138) - listing 7.13 -funkcje ze wskaźnikami na struktury jako parametry
// konwerter z ukladu Kartezjańskiego na biegunowy - 
// converter Cartesian coordinates to polar ccrdinates

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

struct polar
{
	double distance;	// odleglosc od poczatku ukladu - distance from oring of coordinates
	double angle;		// kierunek wzgledem dodatniej polosi X - direction against positive semi-axis 
};

struct rect
{
	double x;			// odleglosc od poczatku ukladu w poziomie - distance from oring of coordinates in direction horizontal
	double y;			// odleglosc od poczatku ukladu w pionie - distance from oring of coordinates in direction vertical
};

void rect_to_polar(const rect * pxy, polar * pda);	// prototyp funkcji (wskaznik na stala strukture wejsciowa, wskaznik na strukture wyjsciowa)

void show_polar(const polar * pda);		

int main()
{
	using namespace std;
	
	rect rplace;				// inicjowanie struktury typu rect
	polar pplace;				// inicjowanie struktury typu polar

	cout << "Podaj wartosc x i y: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);		//przekazujemy adresy struktur do funkcji (wejsciowa, wyjsciowa)
		show_polar(&pplace);					// przekazanie adresu struktury typu polar
		cout << "\nNastepna para liczb lub q, aby zakonczyc: ";
	}
	cout << "Gotowe.\n";
	
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void show_polar(const polar * pda) // pokarzuje wspolrzedne biegunowe - show polar coordinates
{
	using namespace std;
	const double Rad_to_deg = 180 / M_PI;

	cout << "Odleglosc = " << pda->distance;
	cout << ", a kat = " << pda->angle; 
	cout << " radianow = " << pda->angle * Rad_to_deg;
	cout << " stopni.";
};

// konwerter z ukladu Kartezjańskiego na biegunowy - converter Cartesian coordinates to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
	using namespace std;
	// paramert formalny nie  jest struktura tylko wskaznikiem wiec uzyjemy posredniego operatora przynaleznosci (->) zamiast bezposredniego (.)
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);		// arctan (y/x)
}
