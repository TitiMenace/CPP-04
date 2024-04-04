#include "Animal.hpp"

int main()
{
	Animal*	tab[10];

	for (int x = 0; x ++; x < 5){
		
		tab[x] = new Dog();
	}
	for	(int x = 5; x++; x < 10){
		tab[x] = new Cat();
	}
	for (int x = 0; x++; x < 10){
		delete tab[x];
	}
}
