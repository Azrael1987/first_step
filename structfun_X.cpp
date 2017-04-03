// structfun_X.cpp -- (137) - listing 7.12 - funkcje majace strukture jako parametr
// program przeliczajacy uklad wspolzednych biegunowych na prostokatne i odwrotnie
// poprawic dokladnosc obliczen

#include <iostream>
#include <cmath>			// biblioteka z funkcjami artmetycznymi
#include <cstdlib>			// exit();

const double rad_to_dag = 57.29577951308767;			// przelicznik z radianow na stopnie 
const double dag_to_rad = 1 / rad_to_dag;			// przelicznik ze stopni na radiany
//const long double r_to_d = 180 / M_PI;			// daje mniejsza dokladnosc

struct polar
{
	double distance;		// odleglosc od poczatku ukladu
	double angel;			// kat wzgledem dodatniej polosi X
};

struct rect
{
	double x;				// odleglosc od poczatku ukaldu w pozimie
	double y;				// odleglosc od poczatku ukaldu w pionie
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
				if (cin >> pplace.distance >> pplace.angel)
				{
				rplace = polar_to_rect(pplace);
				show_rect(rplace);
				cout << "Wpisz dowolna litere aby wrocic do manu wyboru.\n";
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
				cout << "Wpisz dowolna litere aby wrocic do manu wyboru.\n";
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
		cin.get();
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
	answer_p.angel =  atan2(xypos.y , xypos.x);								// arcus tang y/x

	return answer_p;														//zwraca strukture polar
}

rect polar_to_rect(polar dapos)
{
	using namespace std;
	rect answer_r;

	answer_r.x = dapos.distance * sin(dapos.angel*dag_to_rad);			// odleglosc * sin (kat przeliczonego stopni na radiany)
	answer_r.y = dapos.distance * cos(dapos.angel*dag_to_rad);			// odleglosc * cos (kat przeliczonego stopni na radiany)
	return answer_r;
}

void show_polar(polar dapos)
{
	using namespace std;

	cout << "Odleglosc  = " << dapos.distance;
	cout << ", kat w radianach =" << dapos.angel;
	cout << ", a kat w stopniach = " << dapos.angel*rad_to_dag << endl;
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
