/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:46:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/30 10:40:36 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABase.hpp"
#include "Char.hpp"
#include "Int.hpp"
#include "Float.hpp"
#include "Double.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>
#include <exception>

int main(int argc, char *argv[]) {
	std::string str_to_convert;
	ABase* base = NULL;

	if (argc != 2) {
		std::cerr << "Error: invalid argument count." << std::endl;
		return 1;
	}

	str_to_convert = argv[1];

	if (isFloat(str_to_convert)) {
		std::cout << "Is Float!" << std::endl;
		//base = new Float(str_to_convert);
	} else if (isDouble(str_to_convert)) {
		std::cout << "Is Double!" << std::endl;
		//base = new Double(str_to_convert);
	} else if (isChar(str_to_convert)) {
		std::cout << "Is Char!" << std::endl;
		base = new Char(str_to_convert);
	} else if (isInt(str_to_convert)) {
		std::cout << "Is Int!" << std::endl;
		base = new Int(str_to_convert);
	} else {
		std::cerr << "Error: invalid argument." << std::endl;
		return 2;
	}

	try {
		std::cout << "char: " << base->toChar() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "int: " << base->toInt() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "float: " << base->toFloat() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "double: " << base->toDouble() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	delete base;

	return 0;
}
