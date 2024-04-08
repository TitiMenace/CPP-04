#pragma once

#include <string>
#include <iostream>

class	Brain{

	public:
		
		Brain(void);
		~Brain(void);
		Brain(const Brain &type);
		Brain &operator=(const Brain &type);


	private:

		std::string	ideas[100];
};

