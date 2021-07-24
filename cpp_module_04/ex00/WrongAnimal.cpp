/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:19:10 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:10:21 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

WrongAnimal::WrongAnimal(void) {
	_type = "None";

}

WrongAnimal::WrongAnimal(WrongAnimal const& other) {
	*this = other;
}

/*                                Destructors                                 */

WrongAnimal::~WrongAnimal(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& other) {
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
