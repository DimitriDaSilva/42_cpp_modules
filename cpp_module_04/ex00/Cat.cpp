/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:06:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:57:46 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Cat::Cat(void) {
	std::cout << "Default Cat constructor called" << std::endl;

	_type = "Cat";
}

Cat::Cat(Cat const& other) {
	std::cout << "Copy Cat constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Cat& Cat::operator=(Cat const& other) {
	std::cout << "Cat assignation operator called" << std::endl;

	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
