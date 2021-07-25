/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:06:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 23:07:41 by dda-silv         ###   ########.fr       */
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
	_brain = new Brain();
}

Cat::Cat(Cat const& other) {
	std::cout << "Copy Cat constructor called" << std::endl;

	_type = other._type;
	_brain = new Brain(*other._brain);
}

/*                                Destructors                                 */

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;

	delete _brain;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Cat& Cat::operator=(Cat const& other) {
	std::cout << "Cat assignation operator called" << std::endl;

	_type = other._type;
	*_brain = *other._brain;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
