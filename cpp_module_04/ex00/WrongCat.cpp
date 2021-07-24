/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:31 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:57:46 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

WrongCat::WrongCat(void) {
	std::cout << "Default WrongCat constructor called" << std::endl;

	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& other) {
	std::cout << "Copy WrongCat constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
WrongCat& WrongCat::operator=(WrongCat const& other) {
	std::cout << "WrongCat assignation operator called" << std::endl;

	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void WrongCat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
