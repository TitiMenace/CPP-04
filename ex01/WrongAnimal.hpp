/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:43:37 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:48:16 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"

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
