/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/30 17:13:29 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Double.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Double::Double(void) {}

Double::Double(std::string const& str_to_convert) {
	_str_to_convert = str_to_convert;
	std::istringstream(str_to_convert) >> _converted_value;
}

Double::Double(Double const& other) {
	*this = other;
}

/*                                Destructors                                 */

Double::~Double(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Double& Double::operator=(Double const& other) {
	_str_to_convert = other._str_to_convert;
	_converted_value = other._converted_value;

	return *this;
}

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

char Double::toChar(void) const {
	char ret = (char)_converted_value;

	if (!std::isprint(ret)) {
		throw NonDisplayableException();
	} else {
		return ret;
	}
}

int Double::toInt(void) const {
	return (int)_converted_value;
}

float Double::toFloat(void) const {
	return (float)_converted_value;
}

double Double::toDouble(void) const {
	return _converted_value;
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Double::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* Double::ImpossibleException::what(void) const throw () {
	return "impossible";
}
