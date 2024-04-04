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

		virtual void makeSound(void);
		std::string	getType(void);

	protected:

		std::string	type;
};

class	Cat : public Animal{

	public:

		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &name);
		Cat &operator=(const Cat &type);

		virtual	void makeSound(void);
};


class	Dog : public Animal{

	public:

		Dog(void);
		virtual ~Dog(void);
		Dog(const Dog &name);
		Dog &operator=(const Dog &type);

		virtual void makeSound(void);
};

class	WrongAnimal{

	public:
		
		WrongAnimal(void);
		virtual	~WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &type);
		WrongAnimal &operator=(const WrongAnimal &type);

		void makeSound(void);
		std::string	getType(void);

	protected:

		std::string	type;
};


class	WrongCat : public WrongAnimal{

	public:

		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat(const WrongCat &name);
		WrongCat &operator=(const WrongCat &type);

		void makeSound(void);
};


