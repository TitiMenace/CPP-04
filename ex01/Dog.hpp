/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:42:43 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:55:38 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class	Dog : public Animal{

	public:

		Dog(void);
		virtual ~Dog(void);
		Dog(const Dog &name);
		Dog &operator=(const Dog &type);

		virtual void makeSound(void);

	private:

		Brain	*brain;
};

