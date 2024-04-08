/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:12:36 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 19:58:33 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
	
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	dog->makeSound();
	cat->makeSound();


//	AAnimal	*animal = new AAnimal();


	delete dog;
	delete cat;
	return 0;
}
