#pragma once

# include <string>
# include <iostream>

class	Animal{

	public:
		
		Animal(void);
		virtual	~Animal(void);
		Animal(std::string type);
		Animal(const Animal &type);
		Animal &operator=(const Animal &type);

		virtual void makeSound(void) const;
		std::string	getType(void) const;

	protected:

		std::string	type;
};


