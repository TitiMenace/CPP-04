/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:44:27 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:48:57 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>
# include "Brain.hpp"
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

	public:

		WrongCat(void);
		virtual ~WrongCat(void);
		WrongCat(const WrongCat &name);
		WrongCat &operator=(const WrongCat &type);

		void makeSound(void);
};


