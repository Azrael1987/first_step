// coordin.h -- 182 - listing 9.1
// plik naglowkowy zawiera portotypy funkcji i deklaracje struktur 
// (bedzie zalaczony w plikach file1 i file2)

// deklaracje struktur
#ifndef COORDIN_H_
#define COORDIN_H_

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

// prototypy
polar rect_to_polar(rect xypos);
rect polar_to_rect(polar dapos);
void show_polar(polar dapos);
void show_rect(rect xypos);
void show_menu();

#endif
