
#include "Cat.hpp"

Cat::Cat(void){

	std::cout << "Cat Default Constructor Called !" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return;
}


Cat::~Cat(void){

	std::cout << "Cat Destructor Called !" << std::endl;
	delete this->brain;
	return;
}

Cat&	Cat::operator=(const Cat &type){
	
	std::cout << "Cat Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	this->brain = type.brain;
	return (*this);
}

Cat::Cat(const Cat &type) : AAnimal(){

	std::cout << "Cat Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	Cat::makeSound(void)const{

	std::cout << "🐱 Meow  🐱 Meow 🐱" << std::endl;
	return;
}

