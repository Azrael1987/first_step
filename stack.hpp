// stack.hpp - (196) - Listing 10.10 -- definicja klasy stosu (wg ADT - Abstract Data Type)

#ifndef STACK_HPP_
#define STACK_HPP_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10};		// stala zasiegu klasy
	Item items[MAX];		// przechowuje elementy stosu
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	
	// push() zwraca false, jesli stos jest pelny (true w pozostalych przypadkach)
	bool push(const Item & item);		// odklada element na stos

	// pop() zwraca false jesli stos jest pusty (true w pozostalych przypadkach)
	bool pop(Item & item);
};

#endif
