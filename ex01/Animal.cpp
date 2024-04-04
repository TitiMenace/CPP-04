#include "Animal.hpp"

Animal::Animal(void){

	std::cout << "Animal Default Constructor Called !" << std::endl;
	this->type = "";
	return;
}

Animal::Animal(std::string str){

	std::cout << "Animal typing Constructor Called !" << std::endl;
	type = str;
	return;
}

Animal::~Animal(void){

	std::cout << "Animal Destructor Called !" << std::endl;
	return;
}

Animal&	Animal::operator=(const	Animal	&type){
	
	std::cout << "Animal Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

Animal::Animal(const Animal &type){

	std::cout << "Animal Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	Animal::makeSound(void){

	std::cout << "Indistinct crumbling noises in the dark" << std::endl;
	return;
}

std::string	Animal::getType(void){
	
	return (this->type);
}
