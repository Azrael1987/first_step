// file2.cpp -- 182 - listing 9.2
// dodatkowy plik zordlowy do przykaldowego programu trzyplikowego
// skaldajacego sie z  file1.cpp , file2.cpp i coordin.h
// program przeliczajacy uklad wspolzednych biegunowych na prostokatne i odwrotnie
// converter Cartesian coordinates to polar ccrdinates and polar ccrdinates to Cartesian coordinates

#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>

#include "coordin.h"		// dekalracja struktur i prototypy funkcji

const long double rad_to_deg = 57.29577951308767;	// przelicznik z radianow na stopnie
const long double deg_to_rad = 1 / rad_to_deg;		// przelicznik ze stopni na radiany


polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer_p;

	answer_p.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);		//pierwiastek z sumy kwadartow
	answer_p.angle = atan2(xypos.y, xypos.x);								// arcus tang y/x

	return answer_p;														//zwraca strukture polar
}

rect polar_to_rect(polar dapos)
{
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
