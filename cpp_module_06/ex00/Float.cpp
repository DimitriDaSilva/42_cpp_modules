/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/30 09:28:25 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Float.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Float::Float(void) {}

Float::Float(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
}

Float::Float(Float const& other) {
	*this = other;
}

/*                                Destructors                                 */

Float::~Float(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Float& Float::operator=(Float const& other) {
	_str_to_convert = other._str_to_convert;
	_converted_value = other._converted_value;

	return *this;
}

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

char Float::toChar(void) const {
	return _converted_value;
}

int Float::toInt(void) const {
	return (int)_converted_value;
}

float Float::toFloat(void) const {
	return (float)_converted_value;
}

double Float::toDouble(void) const {
	return (double)_converted_value;
}
