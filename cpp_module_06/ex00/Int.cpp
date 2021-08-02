/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/02 14:41:50 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Int.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Int::Int(void) {}

Int::Int(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
	std::istringstream(str_to_convert) >> _converted_value;
}

Int::Int(Int const& other) {
	*this = other;
}

/*                                Destructors                                 */

Int::~Int(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Int& Int::operator=(Int const& other) {
	_str_to_convert = other._str_to_convert;
	_converted_value = other._converted_value;

	return *this;
}

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

std::string Int::toChar(void) const {
	char ret = (char)_converted_value;

	if (!std::isprint(ret)) {
		throw NonDisplayableException();
	} else {
		return "'" + std::string(1, ret) + "'";
	}
}

int Int::toInt(void) const {
	return _converted_value;
}

float Int::toFloat(void) const {
	return (float)_converted_value;
}

double Int::toDouble(void) const {
	return (double)_converted_value;
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Int::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* Int::ImpossibleException::what(void) const throw () {
	return "impossible";
}
