/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:19:10 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:57:46 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

WrongAnimal::WrongAnimal(void) {
	std::cout << "Default WrongAnimal constructor called" << std::endl;

	_type = "None";

}

WrongAnimal::WrongAnimal(WrongAnimal const& other) {
	std::cout << "Copy WrongAnimal constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& other) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;

	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string WrongAnimal::getType(void) const {
	return _type;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void WrongAnimal::makeSound(void) const {
	std::cout << "* MUTED *" << std::endl;
}
