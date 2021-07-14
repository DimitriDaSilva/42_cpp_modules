/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:34 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 12:10:44 by dda-silv         ###   ########.fr       */
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

void printTableHeader() {
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

void printTableRowDelimiter() {
	int	table_width = NUMBER_COLUMNS * COLUMN_WIDTH + NUMBER_COLUMNS + 1;

	for (int i = 0; i < table_width; i++) {
		std::cout << ROW_DELIMITER;
	} 
	std::cout << std::endl;
}

bool isInteger(const std::string& str) {
	int check = 0;
	char *ptr = nullptr;

	if (str.empty() || !std::isdigit(str[0])) {
		return false;
	}

	// strtol is C API so we need to convert str to a C string
	std::strtol(str.c_str(), &ptr, 10);

	// If ptr is not set as NULL by strtol then it means that the conversion
	// failed
	if (*ptr == 0) {
		check = 1;
	} else {
		check = 0;
	}

	return check;
}