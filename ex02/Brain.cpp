
#include "Brain.hpp"



Brain::Brain(void){

	std::cout << "Brain Default Constructor Called !" << std::endl;
	return;
}

Brain::~Brain(void){

	std::cout << "Brain Destructor Called !" << std::endl;
	return;
}

Brain&	Brain::operator=(const	Brain	&type){
	
	std::cout << "Brain Copy Assignement operator called !" << std::endl;

	for (int x = 0; x < 100; x++){
		this->ideas[x] = type.ideas[x];
	}
	return (*this);
}

Brain::Brain(const Brain &type){

	std::cout << "Brain Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}
