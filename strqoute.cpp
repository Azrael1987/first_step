// strqoute.cpp - (166) - listing 8.7 - różne techniki programowania - referencje z obiektami
#include <iostream>
#include <string>

using namespace std;

string version1(const string & s1, const string & s2);		// poprawny prototyp
const string & version2(string & s1, const string & s2);	// prototyp z efektem uboczny w postaci utraty orginalnego obiektu s1
const string & version3(string & s1, const string & s2);	// jw + bledne zwrocenei referencji do  obiektu lokalnego

int main()
{
	string input;
	string copy;
	string result;

	cout << "Podaj lancuch: ";
	getline(cin, input);
	copy = input;
	cout << "wprowadzony lancuch: " << input << endl;

	result = version1(input, "***");
	cout << "Lancuch po rozbudowie: " << result << endl;
	cout << "Orginalny lancuch: " << input << endl;

	result = version2(input, "###");
	cout << "Lancuch po rozbudowie: " << result << endl;
	cout << "Orginalny lancuch: " << input << endl;

	// tu wykozystanie zle napisanej funkcji
	cout << "przywrocenie orginalenego lancuha.\n";
	input = copy;
	/*result = version3(input, "@@@"); */  // wyrzuc blad
	cout << "Lancuch po rozbudowie: " << result << endl;
	cout << "Orginalny lancuch: " << input << endl; 

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}

string version1(const string & s1, const string & s2)
{
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string & version2(string & s1, const string & s2)		// efekt uboczny w postaci nadpisania  1 lancucha
{
	s1 = s2 + s1 + s2;
	return s1;				// mozna bezpiecznie zwrocic referencje przekazane do funkcji
}

const string & version3(string & s1, const string & s2)
{
	string temp;

	temp = s2 + s1 + s2;
	return temp;			// zwracanie referencji do obiektu lokalnego jest niebezpieczne
}
