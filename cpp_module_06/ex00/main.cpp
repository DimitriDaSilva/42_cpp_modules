/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:46:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/29 19:54:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ABase.hpp"
#include "Char.hpp"
#include "utils.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	std::string str_to_convert;
	ABase* base = NULL;

	if (argc != 2) {
		std::cerr << "Error: invalid argument count." << std::endl;
		return 1;
	}

	str_to_convert = argv[1];

	if (isChar(str_to_convert)) {
		base = new Char(str_to_convert);
	} else {
		std::cerr << "Error: invalid argument." << std::endl;
		return 2;
	}

	std::cout << "char: " << base->toChar() << std::endl;
	std::cout << "int: " << base->toInt() << std::endl;
	std::cout << "float: " << base->toFloat() << std::endl;
	std::cout << "double: " << base->toDouble() << std::endl;

	delete base;

	return 0;
}
