/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:06:52 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:11:38 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog(void){

	std::cout << "Dog Default Constructor Called !" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return;
}

Dog::~Dog(void){

	std::cout << "Dog Destructor Called !" << std::endl;
	delete this->brain;
	return;
}

Dog&	Dog::operator=(const Dog &type){
	
	std::cout << "Dog Copy Assignement operator called !" << std::endl;

	this->type = type.type;
	this->brain = type.brain;
	return (*this);
}

Dog::Dog(const Dog &type) : AAnimal(){

	std::cout << "Dog Copy Constructor Called !" << std::endl;	
	
	(*this) = type;
	return;
}

void	Dog::makeSound(void) const{

	std::cout << "🐶 Woof 🐶 Woof 🐶" << std::endl;
	return;
}

