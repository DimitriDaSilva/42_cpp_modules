/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:31:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const& type) {
	_type = type;
}

AMateria::AMateria(AMateria const& other) {
	*this = other;
}

/*                                Destructors                                 */

AMateria::~AMateria(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                               Assignement                                  */

AMateria& AMateria::operator=(AMateria const& other) {
	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string const& AMateria::getType() const {
	return _type;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void AMateria::use(ICharacter& target) {
	(void)target;
}
