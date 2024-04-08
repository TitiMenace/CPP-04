/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:56:02 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 20:00:11 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Animal.hpp"

class	Cat : public Animal{

	public:

		Cat(void);
		~Cat(void);
		Cat(const Cat &name);
		Cat &operator=(const Cat &type);

		void makeSound(void) const;
};


