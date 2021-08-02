/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:28:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/02 10:11:33 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detectType.hpp"

ABase* getType(std::string const& str_to_convert) {
	ABase* type;

	if (isFloat(str_to_convert)) {
		std::cout << "is float!" << std::endl;
		type = new Float(str_to_convert);
	} else if (isDouble(str_to_convert)) {
		std::cout << "is double!" << std::endl;
		type = new Double(str_to_convert);
	} else if (isChar(str_to_convert)) {
		std::cout << "is char!" << std::endl;
		type = new Char(str_to_convert);
	} else if (isInt(str_to_convert)) {
		std::cout << "is int!" << std::endl;
		type = new Int(str_to_convert);
	} else {
		type = NULL;
	}
	
	return type;
}

bool isChar(std::string const& str) {
	if (str.length() == 1 && std::isprint(str[0])
			&& !('0' <= str[0] && str[0] <= '9')) {
		return true;
	} else {
		return false;
	}
}

bool isInt(std::string const& str) {
	long long	converted;

	if (str.empty() || strisalpha(str)) {
		return false;
	}

	try {
		std::istringstream(str) >> converted;
		if (converted < INT_MIN || INT_MAX < converted) {
			return false;
		} else {
			return true;
		}
	} catch (std::exception& e) {
		return false;
	}
}

bool isFloat(std::string const& str) {
	int	i = 0;

	if (str.empty() || str.length() <= 3 || str.length() >= 10) {
		return false;
	}

	if (str == "-inff" || str == "+inff" || str == "nanf") {
		return true;
	}

	// Increment the potential minus sign
	if (str[i] && str[i] == '-') {
		i++;
	}

	// Parsing integral part
	while (str[i] && std::isdigit(str[i])) {
		i++;
	}

	// Increment the decimal point
	if (str[i] && str[i] == '.') {
		i++;
	} else {
		return false;
	}

	// Parsing fractional part
	while (str[i] && std::isdigit(str[i])) {
		i++;
	}

	// Increment the f at the end of float format
	if (str[i] && str[i] == 'f') {
		i++;
	} else {
		return false;
	}

	if (str.length() == (size_t)i) {
		return true;
	} else {
		return false;
	}
}

bool isDouble(std::string const& str) {
	int	i = 0;

	if (str.empty() || str.length() <= 2 || str.length() >= 10) {
		return false;
	}

	if (str == "-inf" || str == "+inf" || str == "nan") {
		return true;
	}

	// Increment the potential minus sign
	if (str[i] && str[i] == '-') {
		i++;
	}

	// Parsing integral part
	while (str[i] && std::isdigit(str[i])) {
		i++;
	}

	// Increment the decimal point
	if (str[i] && str[i] == '.') {
		i++;
	} else {
		return false;
	}

	// Parsing fractional part
	while (str[i] && std::isdigit(str[i])) {
		i++;
	}

	if (str.length() == (size_t)i) {
		return true;
	} else {
		return false;
	}
}

bool strisalpha(std::string const& str) {
	int i = 0;

	if (str[i] == '-') {
		i++;
	}

	while (str[i]) {
		if (std::isalpha(str[i])) {
			return true;
		}
		i++;
	}

	return false;
}
