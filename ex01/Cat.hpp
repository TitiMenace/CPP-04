/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:42:19 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:47:37 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "Animal.hpp"

class	Cat : public Animal{

	public:

		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &name);
		Cat &operator=(const Cat &type);

		virtual	void makeSound(void);
	
	private:

		Brain	*brain;
};

