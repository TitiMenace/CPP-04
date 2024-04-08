


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int	main(void)
{
	Animal	*animals[12];
	
	for (int i = 0; i < 12; i++)
	{
		if (i < 6){
			std::cout << i + 1 << ": ";
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else{
			std::cout << i + 1 << ": ";
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}
	for (int i = 0; i < 12; i++)
		std::cout << animals[i]->getType() << std::endl;

	//Test to know if the copy on an animal is shallow or deep
	animals[0]->setType("ecureuil");
	Animal	test(*animals[0]);
	
	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	test.setType("cat");

	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	//here it's deep because when i change the type of "test" the type of animal is unchanged

	//same for the assignation operator, it's a deep copy
	*animals[0] = test;
	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	test.setType("colossal Diplodocus");

	std::cout << animals[0]->getType() << std::endl;
	std::cout << test.getType() << std::endl;
	
	for (int i = 0; i < 12; i++)
		delete animals[i];
}
