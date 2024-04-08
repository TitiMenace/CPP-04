

#include "WrongCat.hpp"

WrongCat::WrongCat(void){

	std::cout << "WrongCat Default Constructor Called !" << std::endl;
	this->type = "WrongCat";
	return;
}


WrongCat::~WrongCat(void){

	std::cout << "WrongCat Destructor Called !" << std::endl;
	return;
}

WrongCat&	WrongCat::operator=(const WrongCat &type){
	
	std::cout << "WrongCat Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

WrongCat::WrongCat(const WrongCat &type) : WrongAnimal(){

	std::cout << "WrongCat Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	WrongCat::makeSound(void){

	std::cout << "Meow Meow" << std::endl;
	return;
}

