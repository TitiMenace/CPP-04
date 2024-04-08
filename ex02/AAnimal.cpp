#include "AAnimal.hpp"

AAnimal::AAnimal(void){

	std::cout << "AAnimal Default Constructor Called !" << std::endl;
	this->type = "";
	return;
}

AAnimal::AAnimal(std::string str){

	std::cout << "AAnimal typing Constructor Called !" << std::endl;
	type = str;
	return;
}

AAnimal::~AAnimal(void){

	std::cout << "AAnimal Destructor Called !" << std::endl;
	return;
}

AAnimal&	AAnimal::operator=(const	AAnimal	&type){
	
	std::cout << "AAnimal Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	return (*this);
}

AAnimal::AAnimal(const AAnimal &type){

	std::cout << "AAnimal Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

/*(void	AAnimal::makeSound(void){

	std::cout << "Indistinct crumbling noises in the dark" << std::endl;
	return;
}*/

std::string	AAnimal::getType(void)const{
	
	return (this->type);
}
