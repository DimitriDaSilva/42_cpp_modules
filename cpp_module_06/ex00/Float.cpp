/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 15:57:39 by dda-silv         ###   ########.fr       */
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
	std::istringstream(str_to_convert.substr(0, _str_to_convert.length() - 1)) >> _converted_value;
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

std::string Float::toChar(void) const {
	char ret = static_cast<char>(_converted_value);

	if (_str_to_convert == "-inff" || _str_to_convert == "+inff" || _str_to_convert == "nanf") {
		throw ImpossibleException();
	} else if (!std::isprint(ret)) {
		throw NonDisplayableException();
	} else {
		return "'" + std::string(1, ret) + "'";
	}
}

int Float::toInt(void) const {
	if (_str_to_convert == "-inff" || _str_to_convert == "+inff" || _str_to_convert == "nanf") {
		throw ImpossibleException();
	} else {
		return static_cast<int>(_converted_value);
	}
}

float Float::toFloat(void) const {
	if (_str_to_convert == "-inff" || _str_to_convert == "+inff" || _str_to_convert == "nanf") {
		throw NanException(_str_to_convert);
	} else {
		return _converted_value;
	}
}

double Float::toDouble(void) const {
	if (_str_to_convert == "-inff" || _str_to_convert == "+inff" || _str_to_convert == "nanf") {
		throw NanException(_str_to_convert.substr(0, _str_to_convert.length() - 1));
	} else {
		return static_cast<double>(_converted_value);
	}
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Float::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* Float::ImpossibleException::what(void) const throw () {
	return "impossible";
}

Float::NanException::NanException(std::string const& msg) : _msg(msg) {}

const char* Float::NanException::what(void) const throw () {
	return _msg.c_str();
}

Float::NanException::~NanException(void) throw() {return;}
