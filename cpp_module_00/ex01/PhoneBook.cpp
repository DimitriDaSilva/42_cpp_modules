/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 20:34:48 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact() {
	Contact newContact;
	int index;

	index = number_of_contacts % MAX_NUMBER_OF_CONTACTS;
	newContact.createContact(index + 1);
	contact_list[index] = newContact;
	number_of_contacts++;
};

void PhoneBook::searchContact() {
	int index = 0;
	bool is_valid_index = false;

	if (number_of_contacts == 0) {
		std::cout << "No contacts found." << std::endl;
		return;
	}

	printTable(number_of_contacts, contact_list);

	std::cout << "Index: ";

	while (!is_valid_index) {
		std::cin >> index;
		if (index < 1 || number_of_contacts < index) {
			std::cout << "Invalid index." << std::endl;
			std::cout << "Index: ";
		} else {
			is_valid_index = true;
		}
	}
	contact_list[index - 1].printContactInfo();
};
