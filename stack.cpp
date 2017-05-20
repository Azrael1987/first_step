// stack.cpp - (196) - Listing 10.11 -- metody klasy stosu
// kompilowac razem z stacker.cpp

#include "stack.hpp"
Stack::Stack()			// tworzy pusty stos
{
	top = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if (0 < top)
	{
		item = items[--top];
		return true;
	}
	else 
		return false;
}
