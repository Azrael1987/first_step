// structfun_X.cpp -- (137) - listing 7.12 - funkcje majace strukture jako parametr
// program przeliczajacy uklad wspolzednych biegunowych na prostokatne i odwrotnie
// converter Cartesian coordinates to polar ccrdinates and polar ccrdinates to Cartesian coordinates

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>			// biblioteka z funkcjami artmetycznymi
#include <cstdlib>			// exit();

using namespace std;

const long double rad_to_deg = 57.29577951308767;	// przelicznik z radianow na stopnie
const long double deg_to_rad = 1 / rad_to_deg;		// przelicznik ze stopni na radiany

struct polar
{
	long double distance;		// odleglosc od poczatku ukladu
	long double angle;			// kat wzgledem dodatniej polosi X
};

struct rect
{
	long double x;				// odleglosc od poczatku ukaldu w pozimie
	long double y;				// odleglosc od poczatku ukaldu w pionie
};

polar rect_to_polar(rect xypos);
rect polar_to_rect(polar dapos);
void show_polar(polar dapos);
void show_rect(rect xypos);
void show_menu();

int main()
{
	using namespace std;
	show_menu();
	rect rplace;
	polar pplace;
	char temp;
	cin >> temp;

	while((temp!='q') && (temp!='Q'))
	{
			if (temp == 'R' || temp == 'r')
			{
			cout << "Wybrales konwersje z ukladu biegunowego na prostokatny.\n\n";
			cout << "Podaj odleglosc oraz kat: ";
				if (cin >> pplace.distance >> pplace.angle)
				{
				rplace = polar_to_rect(pplace);
				show_rect(rplace);
				}
			
			}
			else if (temp == 'P' || temp == 'p')
			{
			cout << " wybrales konwersje z ukladu prostokatnego na biegunowy.\n\n";
			cout << "Podaj wspolrzedna X oraz wspolrzedna Y ";
			if (cin >> rplace.x>> rplace.y)
				{
				pplace = rect_to_polar(rplace);
				show_polar(pplace);
				}
			}
			else if (temp == 'q' || temp == 'Q')
			{
			cout << "Program zaraz zostanie zmakniety.";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cin.get();
			exit(EXIT_FAILURE);
			}
			
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		show_menu();
		cin >> temp;
	}
	
	cout << "Do zobaczenia :)";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

polar rect_to_polar(rect xypos) 
{
	using namespace std;
	polar answer_p;

	answer_p.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);		//pierwiastek z sumy kwadartow
	answer_p.angle =  atan2(xypos.y , xypos.x);								// arcus tang y/x

	return answer_p;														//zwraca strukture polar
}

rect polar_to_rect(polar dapos)
{
	using namespace std;
	using namespace std;
	rect answer_r;

	if ((dapos.angle == 90) || (dapos.angle == 270))
		answer_r.x = 0;
	else
	{
		answer_r.x = dapos.distance * cos((dapos.angle*deg_to_rad));	// odleglosc * sin (kat przeliczonego stopni na radiany)
		cout << "wariant 3" << endl << endl;
	}
	
	if (dapos.distance == 0)
	{
		answer_r.x = 0;
		answer_r.y = 0;
		cout << "tu blad 1" << endl << endl;
	}
	else if ((dapos.angle == 0) || (dapos.angle == 180) || (dapos.angle == 360))
	{
		answer_r.y = 0;
		cout << "blad 2" << endl << endl;
	}
	else
	answer_r.y = dapos.distance * sin((dapos.angle*deg_to_rad));			// odleglosc * cos (kat przeliczonego stopni na radiany)
	
	return answer_r;
}

void show_polar(polar dapos)
{
	using namespace std;

	cout << "Odleglosc  = " << dapos.distance;
	cout << ", kat w radianach =" << dapos.angle;
	cout << ", a kat w stopniach = " << dapos.angle*rad_to_deg << endl;
}

void show_rect(rect xypos)
{
	using namespace std;

	cout << "Wspolrzedna X = " << xypos.x;
	cout << ", a wspolrzedna Y = " << xypos.y << endl;
}

void show_menu()
{
	using namespace std;
	cout << "Wybierz rodzaj konwersji:\n\n";
	cout << "p) z ukladu prostokatnego na biegunowy.\n";
	cout << "r) z ukladu biegunowego na prostokatny.\n";
	cout << "q) zakoncz program.\n";
}
