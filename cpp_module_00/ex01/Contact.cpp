/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:51:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/20 14:46:00 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::createContact(int i) {
	index = i;
	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone number: ";
	std::cin >> phone_number;
	std::cout << "Darkest secret: ";
	std::cin >> darkest_secret;
}

void Contact::printContactRow(void) {
	printTableCell(std::to_string(index));
	printTableCell(first_name);
	printTableCell(last_name);
	printTableCell(nickname);
	std::cout << "|" << std::endl;
}

void Contact::printContactInfo(void) {
	std::cout << "First name: " << first_name << std::endl
		<< "Last name: " << last_name << std::endl
		<< "Nickname: " << nickname << std::endl
		<< "Phone number: " << phone_number << std::endl
		<< "Darkest secret: " << darkest_secret << std::endl;
}
