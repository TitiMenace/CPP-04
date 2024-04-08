#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"

class	AAnimal{

	public:
		
		AAnimal(void);
		virtual	~AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal &type);
		AAnimal &operator=(const AAnimal &type);

		virtual void makeSound(void) const = 0;
		std::string	getType(void) const ;

	protected:

		std::string	type;
};

