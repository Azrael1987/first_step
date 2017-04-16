// zad_7_9_X.cpp - zadanie 9 z rodzialu 7 - (157) - funcje obslugujace struktury zawierające tablice

#include <iostream>
using namespace std;

const int SLEN = 30;
struct student 
{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};

int getinfo(student pa[], int n);			// p f przyjmujacej dane do struktury
void display1(student st);				// p f pobierajaca jako paramert strukture i wyswietlajaceja ja 
void display2(student * ps);				// p f pobierajaca jako parametr adres sturktury i wyswietlajaceja ja
void display3(const student pa[], int n);	// p f pobierajaca jako parametr adres 1 el struktury oraz liczbe el w tab i wyswietla zawartosc struktury

int main()
{
	
	cout << "Podaj wielkosc grupy: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);

	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	cout << "\nGotowe\n";

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return 0;
}

int getinfo(student pa[], int n)
{
	int count = 0;	
	for (int i = 0; i < n; i++)
	{
		cout << "\nPodaj nazwisko " << i+1 <<" studenta: ";
		cin.getline((pa + i)->fullname, SLEN);
		if (strlen((pa+i)->fullname) == 0)
		{
			break;
		}
		else
		{
			cout << "Podaj hobby "<< i+1 <<" studenta: ";
			cin.getline((pa + i)->hobby, SLEN);
			cout << "Podaj poziom " << i+1 <<" studenta: ";
			cin >> (pa[i]).ooplevel;
			count++;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
	
	return count;
}

void display1(student st)
{
	cout << "\n1 metoda wyswietlnia stuktury: \n" << "Nazwisko: " << st.fullname << endl;
	cout << "Hobby: "<<st.hobby << endl;
	cout << "Poziom: " << st.ooplevel << endl;
}

void display2(student * ps)
{
	cout << "\n2 metoda wyswietlnia stuktury: \n" << "Nazwisko: " << (*ps).fullname  << endl;     //mozna tez uzyć (ps)->fullname
	cout << "Hobby: " << (*ps).hobby << endl;
	cout << "Poziom: " << (*ps).ooplevel << endl;
}

void display3(const student pa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n3 metoda wyswietlnia stuktury: \n" << "Nazwisko: " << pa[i].fullname << endl;
		cout << "Hobby: " << pa[i].hobby << endl;
		cout << "Poziom: " << pa[i].ooplevel << endl;
	}
}
