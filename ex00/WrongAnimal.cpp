
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){

	std::cout << "WrongAnimal Default Constructor Called !" << std::endl;
	this->type = "";
	return;
}

WrongAnimal::WrongAnimal(std::string str){

	std::cout << "WrongAnimal typing Constructor Called !" << std::endl;
	type = str;
	return;
}

WrongAnimal::~WrongAnimal(void){

	std::cout << "WrongAnimal Destructor Called !" << std::endl;
	return;
}

WrongAnimal&	WrongAnimal::operator=(const	WrongAnimal	&type){
	
	std::cout << "WrongAnimal Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &type){

	std::cout << "WrongAnimal Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	WrongAnimal::makeSound(void) const{

	std::cout << "BZZzz BZZzz im an Animal BZZzz BZZzz not a Dalek !" << std::endl;
	return;
}

std::string	WrongAnimal::getType(void) const{
	
	return (this->type);
}
