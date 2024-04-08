
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:01:47 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 14:01:53 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp" 

class	Dog : public AAnimal{

	public:

		Dog(void);
		virtual ~Dog(void);
		Dog(const Dog &name);
		Dog &operator=(const Dog &type);

		virtual	void makeSound(void) const;
	
	private:

		Brain	*brain;
};
