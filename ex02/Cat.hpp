/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschecro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:01:47 by tschecro          #+#    #+#             */
/*   Updated: 2024/04/08 19:56:04 by tschecro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "AAnimal.hpp" 

class	Cat : public AAnimal{

	public:

		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &name);
		Cat &operator=(const Cat &type);

		virtual	void makeSound(void)const;
	
	private:

		Brain	*brain;
};
