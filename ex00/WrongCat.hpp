
#pragma once

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

	public:

		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &name);
		WrongCat &operator=(const WrongCat &type);

		void makeSound(void) const;
};


