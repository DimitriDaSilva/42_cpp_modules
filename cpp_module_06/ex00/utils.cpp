/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:28:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/30 10:20:17 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool isChar(std::string const& str) {
	if (str.length() == 1 && std::isprint(str[0])
			&& !('0' <= str[0] && str[0] <= '9')) {
		return true;
	} else {
		return false;
	}
}

bool isInt(std::string const& str) {
	int	converted;

	if (str.empty()) {
		return false;
	}

	try {
		std::istringstream(str) >> converted;
		return true;
	} catch (std::exception& e) {
		return false;
	}
}

bool isFloat(std::string const& str) {
	int	i = 0;

	if (str.empty()) {
		return false;
	}

	if (str == "-inff" || str == "+inff" || str == "nanf") {
		return true;
	}

	// It can't be smaller than 4 characters long (5 if negative)
	//if ((str[0] != '-' && str.length() < (size_t)4)
			//|| str[0] == '-' && str.length() < (size_t)5) {
		//return false;
	//}

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

	if (str.empty()) {
		return false;
	}

	if (str == "-inf" || str == "+inf" || str == "nan") {
		return true;
	}

	// It can't be smaller than 3 characters long (4 if negative)
	//if ((str[0] != '-' && str.length() < (size_t)4)
			//|| str[0] == '-' && str.length() < (size_t)5) {
		//return false;
	//}

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
