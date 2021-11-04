/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/11/04 09:09:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

// Convert a string to uppercase
static std::string	ft_strtoupper(std::string str) {
	// Duplicate string because argv is const
	std::string	upper(str);

	// Parse string and convert char if lowercase
	for (int i = 0; i < (int)upper.length(); i++) {
		if (std::islower(upper[i])) {
			upper[i] = std::toupper(upper[i]);
		}
	}

	return upper;
}

int	main(int argc, char *argv[]) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		for (int i = 1; i < argc; i++) {
			std::cout << ft_strtoupper(argv[i]);
		}
		std::cout << std::endl;
	}

	return EXIT_SUCCESS;
}
