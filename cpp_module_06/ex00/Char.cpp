/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/29 19:54:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Char::Char(void) {}

Char::Char(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
	_converted_value = _str_to_convert[0];
}

Char::Char(Char const& other) {
	*this = other;
}

/*                                Destructors                                 */

Char::~Char(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Char& Char::operator=(Char const& other) {
	_str_to_convert = other._str_to_convert;
	_converted_value = other._converted_value;

	return *this;
}

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

char Char::toChar(void) const {
	return _converted_value;
}

int Char::toInt(void) const {
	return (int)_converted_value;
}

float Char::toFloat(void) const {
	return (float)_converted_value;
}

double Char::toDouble(void) const {
	return (double)_converted_value;
}
