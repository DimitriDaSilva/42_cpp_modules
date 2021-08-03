/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 15:53:41 by dda-silv         ###   ########.fr       */
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

std::string Double::toChar(void) const {
	char ret = static_cast<char>(_converted_value);

	if (_str_to_convert == "-inf" || _str_to_convert == "+inf" || _str_to_convert == "nan") {
		throw ImpossibleException();
	} else if (!std::isprint(ret)) {
		throw NonDisplayableException();
	} else {
		return "'" + std::string(1, ret) + "'";
	}
}

int Double::toInt(void) const {
	if (_str_to_convert == "-inf" || _str_to_convert == "+inf" || _str_to_convert == "nan") {
		throw ImpossibleException();
	} else {
		return static_cast<int>(_converted_value);
	}
}

float Double::toFloat(void) const {
	if (_str_to_convert == "-inf" || _str_to_convert == "+inf" || _str_to_convert == "nan") {
		throw NanException(_str_to_convert + "f");
	} else {
		return static_cast<float>(_converted_value);
	}
}

double Double::toDouble(void) const {
	if (_str_to_convert == "-inf" || _str_to_convert == "+inf" || _str_to_convert == "nan") {
		throw NanException(_str_to_convert);
	} else {
		return _converted_value;
	}
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

Double::NanException::NanException(std::string const& msg) : _msg(msg) {}

const char* Double::NanException::what(void) const throw () {
	return _msg.c_str();
}

Double::NanException::~NanException(void) throw() {return;}
