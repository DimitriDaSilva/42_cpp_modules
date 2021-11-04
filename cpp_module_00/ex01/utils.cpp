/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:34 by dda-silv          #+#    #+#             */
/*   Updated: 2021/11/04 09:37:43 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void printTable(int number_of_contacts, Contact contact_list[]) {
	// Print table header
	printTableRowDelimiter();
	printTableHeader();
	printTableRowDelimiter();

	// Contact class prints itself each row
	for (int i = 0; i < number_of_contacts && i < MAX_NUMBER_OF_CONTACTS; i++) {
		contact_list[i].printContactRow();
	}

	printTableRowDelimiter();
}

void printTableHeader(void) {
	printTableCell("Index");
	printTableCell("First name");
	printTableCell("Last name");
	printTableCell("Nickname");
	std::cout << COLUMN_DELIMITER << std::endl;
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

void printTableRowDelimiter(void) {
	int	table_width = NUMBER_COLUMNS * COLUMN_WIDTH + NUMBER_COLUMNS + 1;

	for (int i = 0; i < table_width; i++) {
		std::cout << ROW_DELIMITER;
	} 
	std::cout << std::endl;
}

std::string intToString(int nb) {
	std::ostringstream ss;

	ss << nb;

	return ss.str();
}

int stringToInt(const std::string& str)
{
	int nb = 0;

	std::istringstream(str) >> nb;

	return nb;
}
