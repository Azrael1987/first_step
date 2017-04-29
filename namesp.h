// namesp.h - 188 - listing 9.11 - przestrenie nazw
// kompilowac z usenmsp.cpp i namesp.cpp
#include<string>

// tworzenie  przestrzeni nazw pres i debts
namespace pers
{
	struct Person
	{
		std::string fname;
		std::string lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person name;
		double amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int en);
}
