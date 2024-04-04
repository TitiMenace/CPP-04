
#include "Animal.hpp"

Dog::Dog(void){

	std::cout << "Dog Default Constructor Called !" << std::endl;
	this->type = "Dog";
	return;
}

Dog::~Dog(void){

	std::cout << "Dog Destructor Called !" << std::endl;
	return;
}

Dog&	Dog::operator=(const Dog &type){
	
	std::cout << "Dog Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

Dog::Dog(const Dog &type) : Animal(){

	std::cout << "Dog Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	Dog::makeSound(void){

	std::cout << "Woof Woof" << std::endl;
	return;
}

