#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"

class	Animal{

	public:
		
		Animal(void);
		virtual	~Animal(void);
		Animal(std::string type);
		Animal(const Animal &type);
		Animal &operator=(const Animal &type);

		virtual void makeSound(void);
		std::string	getType(void);

		void	setType(const std::string type);
	protected:

		std::string	type;
};

