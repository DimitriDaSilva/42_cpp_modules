/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:51:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 18:59:09 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::createContact(int i) {
	std::cout << "Adding a new contact..." << std::endl;

	index = i;
	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
}

void Contact::printContact() {
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << index;
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << first_name;
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << last_name;
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << nickname;
	std::cout << "|" << std::endl;
}
