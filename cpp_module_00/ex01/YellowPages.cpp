/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 18:16:43 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "YellowPages.hpp"

void YellowPages::addContact() {
	Contact newContact;

	newContact.getContact();
	if (number_of_contacts == MAX_NUMBER_OF_CONTACTS)
		number_of_contacts -= MAX_NUMBER_OF_CONTACTS;
	contact_list[number_of_contacts] = newContact;
	number_of_contacts++;
};

void YellowPages::searchContact() {
	std::cout << "Searching contact..." << std::endl;
	for (int i = 0; i < 45; i++) {
		std::cout << "_";
	} 
	std::cout << std::endl;
	std::cout << "|" << std::right << std::setw(10) << "Index";
	std::cout << "|" << std::right << std::setw(10) << "First name";
	std::cout << "|" << std::right << std::setw(10) << "Last name";
	std::cout << "|" << std::right << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < 45; i++) {
		std::cout << "_";
	} 
	std::cout << std::endl;
	for (int i = 0; i < number_of_contacts; i++) {
		contact_list[i].printContact(i);
	}
};
