/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 22:40:12 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 23:07:17 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Dog::Dog(void) {
	std::cout << "Default Dog constructor called" << std::endl;

	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog const& other) {
	std::cout << "Copy Dog constructor called" << std::endl;

	_type = other._type;
	_brain = new Brain(*other._brain);
}

/*                                Destructors                                 */

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;

	delete _brain;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Dog& Dog::operator=(Dog const& other) {
	std::cout << "Dog assignation operator called" << std::endl;

	_type = other._type;
	*_brain = *other._brain;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
