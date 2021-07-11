/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:34 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 20:10:30 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void printTable(int number_of_contacts, Contact contact_list[]) {
	printTableRowDelimiter();
	printTableHeader();
	for (int i = 0; i < number_of_contacts && i < MAX_NUMBER_OF_CONTACTS; i++) {
		contact_list[i].printContactRow();
	}
	printTableRowDelimiter();
	std::cout << std::endl;

}

void printTableHeader() {
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

void printTableCell(std::string content) {
	std::string adj_content;

	if (content.length() > COLUMN_WIDTH) {
		adj_content = content.substr(0, COLUMN_WIDTH - 1) + '.';
	} else {
		adj_content = content;
	}
	std::cout << COLUMN_DELIMITER << std::right
		<< std::setw(COLUMN_WIDTH) << adj_content;
}

void printTableRowDelimiter() {
	int	table_width = NUMBER_COLUMNS * COLUMN_WIDTH + NUMBER_COLUMNS + 1;

	for (int i = 0; i < table_width; i++) {
		std::cout << ROW_DELIMITER;
	} 
}
