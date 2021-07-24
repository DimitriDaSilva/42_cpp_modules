/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:31 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:07:42 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

WrongCat::WrongCat(void) {
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& other) {
	*this = other;
}

/*                                Destructors                                 */

WrongCat::~WrongCat(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
WrongCat& WrongCat::operator=(WrongCat const& other) {
	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void WrongCat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
