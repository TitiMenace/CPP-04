/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:56:43 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 20:00:32 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Dog : public Animal{

	public:

		Dog(void);
		~Dog(void);
		Dog(const Dog &name);
		Dog &operator=(const Dog &type);

		void makeSound(void) const;
};






