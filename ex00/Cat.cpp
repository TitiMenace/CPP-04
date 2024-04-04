
#include "Animal.hpp"

Cat::Cat(void){

	std::cout << "Cat Default Constructor Called !" << std::endl;
	this->type = "Cat";
	return;
}


Cat::~Cat(void){

	std::cout << "Cat Destructor Called !" << std::endl;
	return;
}

Cat&	Cat::operator=(const Cat &type){
	
	std::cout << "Cat Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

Cat::Cat(const Cat &type) : Animal(){

	std::cout << "Cat Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	Cat::makeSound(void){

	std::cout << "Meow Meow" << std::endl;
	return;
}

