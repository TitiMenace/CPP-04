#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"


int main(void)
{
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	std::cout << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* dog = new Dog();
	std::cout << std::endl;
	const Animal* cat = new Cat();
	std::cout << std::endl;
	
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl << std::endl;
	
	
	dog->makeSound();
	cat->makeSound();
	meta->makeSound();
	wrongCat->makeSound();
	meta2->makeSound();

	std::cout << std::endl;
	delete wrongCat;
	delete meta2;
	delete meta;
	delete dog;
	delete cat;

	return 0;
}
