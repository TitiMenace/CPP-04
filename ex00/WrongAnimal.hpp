/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:57:44 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 18:05:51 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class	WrongAnimal{

	public:
		
		WrongAnimal(void);
		virtual	~WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &type);
		WrongAnimal &operator=(const WrongAnimal &type);

		void makeSound(void) const;
		std::string	getType(void) const;

	protected:

		std::string	type;
};

