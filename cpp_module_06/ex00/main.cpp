/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:46:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 11:00:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char *argv[]) {
	std::string str_to_convert;
	ABase* type = NULL;

	if (argc != 2) {
		std::cerr << "Error: invalid argument count." << std::endl;
		return 1;
	}

	str_to_convert = argv[1];

	if (!(type = getType(str_to_convert))) {
		std::cerr << "Error: invalid argument." << std::endl;
		return 2;
	}

	printTypes(type, str_to_convert);

	delete type;

	return 0;
}
