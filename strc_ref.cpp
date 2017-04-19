// strc_ref.cpp - (165) - listing 8.6 - uzycie referencji do struktur

#include <iostream>
#include <string>
using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws & ft);			//  referencja do struktury (nie modyfikująca)
void set_pc(free_throws & ft);					// referencja do struktury (modyfikujaca)
free_throws & accumulate(free_throws & target, const free_throws & source);	

int main()
{
	// inicjalizacja czesciowa struktur -- reszta skladowych jest zerowana
	free_throws one = { "Ifelsa Branch", 13 , 14 };
	free_throws two = { "Andor Knott" , 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };

	// bez inicjalizacji
	free_throws dup;

	set_pc(one);
	display(one);
	accumulate(team, one);

	display(team);

	// wartosci zwracanych  uzyjemy w roli argumentow wywolania:
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four );
	display(team);

	// wartosci zwracane uzyte w przypisaniach:
	dup = accumulate(team, five);
	cout << "Statystka dla team:\n";
	display(team);
	cout << "Statystyka dla dup po przypisaniu:\n";
	display(dup);
	set_pc(four);

	// zle skonsturowane przypisanie które powoduje utrate wczesniejszych wartosci
	accumulate(dup, five) = four;
	cout << "Statystyki dla dup po omyslkowym przypisaniu:\n";
	display(dup);
	
	cin.get();
	return 0;

}

void display(const free_throws & ft)
{
	cout << "Imie: " << ft.name << endl;
	cout << "Trafionych: " << ft.made << endl;
	cout << "Rzutow: " << ft.attempts << endl;
	cout << "Skutecznosc: " << ft.percent << endl;
}

void set_pc(free_throws & ft)
{
	if (ft.attempts != 0)
	{
		ft.percent = (100.0f * float(ft.made)) / float(ft.attempts);
	}
	else
		ft.percent = 0.0f;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
