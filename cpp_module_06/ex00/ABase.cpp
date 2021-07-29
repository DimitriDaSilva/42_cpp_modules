/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABase.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/29 19:50:09 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABase.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ABase::ABase(void) {}

ABase::ABase(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
}

ABase::ABase(ABase const& other) {
	*this = other;
}

/*                                Destructors                                 */

ABase::~ABase(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

ABase& ABase::operator=(ABase const& other) {
	_str_to_convert = other._str_to_convert;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string ABase::getStrToConvert(void) const {
	return _str_to_convert;
}

void ABase::setStrToConvert(std::string const& str) {
	_str_to_convert = str;
}
