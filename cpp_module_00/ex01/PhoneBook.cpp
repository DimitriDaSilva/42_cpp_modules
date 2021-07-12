/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 12:03:45 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact() {
	Contact newContact;
	int index;

	// Cap the index independentely of the number_of_contacts entered
	index = number_of_contacts % MAX_NUMBER_OF_CONTACTS;

	// Create the new contact and add it to the array of contacts in phonebook
	newContact.createContact(index + 1);
	contact_list[index] = newContact;

	number_of_contacts++;
};

void PhoneBook::searchContact() {
	std::string	input;
	long index = 0;
	bool is_index_valid = false;

	// Do nothing if no contacts
	if (number_of_contacts == 0) {
		std::cout << "No contacts found." << std::endl;
		return;
	}

	printTable(number_of_contacts, contact_list);

	// Get index input from user
	// Ask for input while input not valid
	std::cout << "Index: ";
	while (!is_index_valid) {
		std::cin >> input;

		// Check if input is an int
		if (!isInteger(input)) {
			std::cout << "Invalid index." << std::endl;
			std::cout << "Index: ";
			continue;
		} else {
			index = std::stol(input);
		}

		// Check if input is among available indexes
		if (index < 1 || number_of_contacts < index) {
			std::cout << "Invalid index." << std::endl;
			std::cout << "Index: ";
		} else {
			is_index_valid = true;
		}
	}

	contact_list[index - 1].printContactInfo();
};
