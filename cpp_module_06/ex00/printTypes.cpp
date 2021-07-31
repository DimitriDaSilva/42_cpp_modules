/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printTypes.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:57:08 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 11:19:05 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printTypes.hpp"

void printTypes(ABase* type, std::string const& str_to_convert) {
	int precision = getPrecision(str_to_convert);

	std::cout << std::fixed;

	try {
		std::cout << "char: " << type->toChar() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "int: " << type->toInt() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "float: " << std::setprecision(precision) << type->toFloat() << "f" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "double: " << std::setprecision(precision) << type->toDouble() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

}

int getPrecision(std::string const& str_to_convert) {
	int precision = 0;
	int pos_decimal_point;

	// If it's neither float or double then the precision needs to be 1
	// like 42 would be 42.0f and 42.0 respectively
	if (!(isFloat(str_to_convert) || isDouble(str_to_convert))) {
		return 1;
	}

	// Get position of decimal point
	pos_decimal_point = str_to_convert.find(".");

	// Count number of characters between decimal point and end (for double)
	// or 'f' character (for float)
	for (int i = pos_decimal_point + 1;
			str_to_convert[i] && str_to_convert[i] != 'f';
			i++) {
		precision++;
	}

	return precision;
}
