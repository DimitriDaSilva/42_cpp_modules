/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:51:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 18:14:02 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::getContact() {
	std::cout << "Adding a new contact..." << std::endl;

	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
}

void Contact::printContact(int index) {
	std::cout << "|" << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10) << first_name;
	std::cout << "|" << std::right << std::setw(10) << last_name;
	std::cout << "|" << std::right << std::setw(10) << nickname;
	std::cout << "|" << std::endl;
}
