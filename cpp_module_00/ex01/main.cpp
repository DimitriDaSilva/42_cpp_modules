/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/20 14:46:57 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main() {
	PhoneBook	phone_book;
	std::string	command;

	std::cout << "Welcome to the infamous Yellow Pages!" << std::endl;

	// Infinite loop. Only ended by QUIT command
	while (1) {
		std::cout << "Command:" << std::endl << "$ ";
		std::cin >> command;
		if (command.compare("ADD") == 0) {
			phone_book.addContact();
		}
		else if (command.compare("SEARCH") == 0) {
			phone_book.searchContact();
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
