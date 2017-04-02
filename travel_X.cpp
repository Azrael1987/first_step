// travel_X.cpp -- (136) - liting 7.11 - funkcja i sturktury - f sumujaca czasy podrozy

#include <iostream>
	
struct travel_time						// Definicja struktury
{
	int times_h;
	int times_m;
}day1, day2, day3;

const int mins_per_hours = 60;			//staly przelicznik z minut na godziny

travel_time sum(travel_time t1, travel_time t2);	// prototyp funkcji sumujaca czasy podrozy
void show_time(travel_time t);						// prottyp funkcji wyswietlajacj dane ze struktury

int main()
{
	using namespace std;
	cout << "Podaj ilsoc godzin podrozy 1 dnia: ";
	cin >> day1.times_h;
	cout << "Podaj ilsoc minut podrozy 1 dnia: ";
	cin >> day1.times_m;
	cout << "Podaj ilsoc godzin podrozy 2 dnia: ";
	cin >> day2.times_h;
	cout << "Podaj ilsoc minut podrozy 2 dnia: ";
	cin >> day2.times_m;

	travel_time trip = sum(day1, day2);
	cout << "\nSuma czasu podrozy przez 2 dni to: ";
	show_time(trip);

	cout << "\nPodaj ilsoc godzin podrozy 3 dnia: ";
	cin >> day3.times_h;
	cout << "Podaj ilsoc minut podrozy 3 dnia: ";
	cin >> day3.times_m;

	cout << "\nSuma czasu podrozy przez 3 dni to: ";
	show_time(sum(day3, trip));

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	total.times_m = (day1.times_m + day2.times_m) % mins_per_hours;
	total.times_h = day1.times_h + day2.times_h + (day1.times_m + day2.times_m) / mins_per_hours;
	
	return total;
}

void show_time(travel_time t)
{
	using namespace std;
	cout << t.times_h << " godzin i " << t.times_m << " minut.\n";
}
