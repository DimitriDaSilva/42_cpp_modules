/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 17:33:44 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main() {
	YellowPages yp;
	std::string command;

	std::cout << "Welcome to the infamous Yellow Pages!" << std::endl;
	while (1) {
		std::cout << "Command:" << std::endl << "$ ";
		std::cin >> command;
		if (command.compare("ADD") == 0) {
			yp.addContact();
		}
		else if (command.compare("SEARCH") == 0) {
			yp.searchContact();
		}
		else if (command.compare("QUIT") == 0) {
			break ;
		}
		else {
			std::cout << "Invalid command." << std::endl;
		}
	}

	return EXIT_SUCCESS;
}
