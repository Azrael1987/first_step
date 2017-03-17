// quiz.cpp -- quiz 1 kortnego wyboru - program bazujacy na filmie z YT nieco karkolomny switch (101)
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <algorithm>  // funkcja trensform zmieniajaca duze litery na male dla typu string
#include <cctype>	// funkcja tolower() zmieniajaca duze litery na male dla typu char -- niekompiluje sie przy char bo  petla while  pobiera getline  a nie getchar


int main()
{
	using namespace std;
	string nick, subject; // zmienne zawierajaca nick autora i temat quizu
	string content[5];		// tablica zawierajaca tresc 5 pytan
	string answerA[5];
	string answerB[5];
	string answerC[5];
	string answerD[5];
	string right_answer[5];			// char lub string
	string your_answer[5];			// char lub string
	int score=0;

	int nr_of_line = 1;			// nr lini
	int nr_of_question = 0;		// nr pytania
	string line;
	char line2;

	fstream plik;	// zmienna plikowa
	plik.open("quiz.txt", ios::in);		//plik tylko do odczytu

	if (plik.good() == false)		// sprawdzenie czy plik o nazwie "plik" istnieje
	{
		cout << "Brak  pliku z pytaniami.";
		cin.get();
		exit(0);
	}

	while (getline(plik, line))
	{
		switch (nr_of_line)
		{
			case 1: subject = line;
				break;
			case 2: nick = line;
				break;
			case 3: content[nr_of_question] = line;
				break;
			case 4: answerA[nr_of_question] = line;
				break;
			case 5: answerB[nr_of_question] = line;
				break;
			case 6: answerC[nr_of_question] = line;
				break;
			case 7: answerD[nr_of_question] = line;
				break;
			case 8: right_answer[nr_of_question] = line; // tu uzyc line2 jesli odp sa typu char lub line dla typu string
		}
		if (nr_of_line == 8)
			{
				nr_of_line = 2;
				nr_of_question++;
			}
		nr_of_line++;
	}

	plik.close();			//	zamkniecie pliku po wczytaniu danych

	cout << nick << endl << subject << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "\n" << content[i] << endl;
		cout << answerA[i] << endl;
		cout << answerB[i] << endl;
		cout << answerC[i] << endl;
		cout << answerD[i] << endl;
		cout << "Podaj swoja odpowiedz: ";
		cin >> your_answer[i];
		cin.get();
		//tolower(your_answer[i]);  // zmienia wielkosc liter dla typu char dla your_answer i right_answer
		transform(your_answer[i].begin(), your_answer[i].end(), your_answer[i].begin(), ::tolower); // zmienia wielkosc liter dla typu string
		if (your_answer[i] == right_answer[i])
		{
			score++;
			cout << "poprawna odpowiedz! :)" << endl;
		}
		else
		{
			cout << "Zla odpowiedz. Poprawna odpowiedz to: " << right_answer[i] << endl;
		}
		
	}
	cout << "\nTwoj wynik to: " << score << "pkt." << endl;
	cin.get();
	return 0;
}
