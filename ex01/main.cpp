#include "Animal.hpp"

int main()
{
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	WrongAnimal* meto = new WrongAnimal();
	WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	meto->makeSound();



	delete meta;
	delete meto;
	delete j;
	delete k;
	delete i;

	return (0);
}
