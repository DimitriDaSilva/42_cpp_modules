/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:51:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/11/04 09:21:43 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::createContact(int i) {
	index = i;
	std::cout << "First name: ";
	std::getline(std::cin >> std::ws, first_name);
	std::cout << "Last name: ";
	std::getline(std::cin >> std::ws, last_name);
	std::cout << "Nickname: ";
	std::getline(std::cin >> std::ws, nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin >> std::ws, phone_number);
	std::cout << "Darkest secret: ";
	std::getline(std::cin >> std::ws, darkest_secret);
}

void Contact::printContactRow(void) {
	printTableCell(intToString(index));
	printTableCell(first_name);
	printTableCell(last_name);
	printTableCell(nickname);
	std::cout << COLUMN_DELIMITER << std::endl;
}

void Contact::printContactInfo(void) {
	std::cout << "First name: " << first_name << std::endl
		<< "Last name: " << last_name << std::endl
		<< "Nickname: " << nickname << std::endl
		<< "Phone number: " << phone_number << std::endl
		<< "Darkest secret: " << darkest_secret << std::endl;
}

