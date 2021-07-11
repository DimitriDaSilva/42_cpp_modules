/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 19:00:08 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "YellowPages.hpp"

void YellowPages::addContact() {
	Contact newContact;
	int index;

	index = number_of_contacts % MAX_NUMBER_OF_CONTACTS;
	newContact.createContact(index + 1);
	contact_list[index] = newContact;
	number_of_contacts++;
};

void YellowPages::searchContact() {
	std::cout << "Searching contacts..." << std::endl;
	if (number_of_contacts == 0) {
		std::cout << "No contacts found." << std::endl;
		return;
	}
	printTableHeader();
	for (int i = 0; i < number_of_contacts && i < MAX_NUMBER_OF_CONTACTS; i++) {
		contact_list[i].printContact();
	}
	for (int i = 0; i < 45; i++) {
		std::cout << "-";
	} 
	std::cout << std::endl;
};

void	printTableHeader() {
	for (int i = 0; i < 45; i++) {
		std::cout << "-";
	} 
	std::cout << std::endl;
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << "Index";
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << "First name";
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << "Last name";
	std::cout << "|" << std::right << std::setw(COLUMN_WIDTH) << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 45; i++) {
		std::cout << "-";
	} 
	std::cout << std::endl;

}
