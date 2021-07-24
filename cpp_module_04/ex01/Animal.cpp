/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:19:10 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:50:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Animal::Animal(void) {
	std::cout << "Default Animal constructor called" << std::endl;

	_type = "None";

}

Animal::Animal(Animal const& other) {
	std::cout << "Copy Animal constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

Animal& Animal::operator=(Animal const& other) {
	std::cout << "Animal assignation operator called" << std::endl;

	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string Animal::getType(void) const {
	return _type;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Animal::makeSound(void) const {
	std::cout << "* MUTED *" << std::endl;
}
