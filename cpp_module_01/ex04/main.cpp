/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/15 11:33:20 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int replace(std::string& filename, std::string& s1, std::string& s2);
std::string replace_line(std::string& line, std::string& s1, std::string& s2);

int	main(int argc, char *argv[]) {
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty() || s2.empty()) {
		std::cerr << "Error: At least one of the strings is empty." << std::endl;
		return 2;
	}

	if (replace(filename, s1, s2) != EXIT_SUCCESS) {
		return 3;
	}

	return 0;
}

int replace(std::string& filename, std::string& s1, std::string& s2) {
	std::ifstream input_file;
	std::ofstream output_file;
	std::string line;
	std::size_t	found_pos;

	input_file.open(filename, std::ios::in);
	output_file.open(filename + ".replace", std::ios::out);
	if (!input_file.is_open() || !output_file.is_open()) {
		std::cerr << "Error: Could not open file." << std::endl;
		return EXIT_FAILURE;
	}

	// Parse file line per line
	while (std::getline(input_file, line)) {
		// Find in the line the s1 string
		found_pos = line.find(s1);

		// If s1 is found then replace_line
		// Else write line read to output_file
		if (found_pos != std::string::npos) {
			output_file << replace_line(line, s1, s2) << std::endl;
		} else {
			output_file << line << std::endl;
		}
	}

	input_file.close();
	output_file.close();

	return EXIT_SUCCESS;
}

std::string replace_line(std::string& line, std::string& s1, std::string& s2) {
	std::string new_line;
	std::size_t	old_found_pos = 0;
	std::size_t	new_found_pos = 0;

	// Loop until no more s1 strings to be found
	while ((new_found_pos = line.find(s1, old_found_pos)) != std::string::npos) {
		// Copy piece of string that is not s1
		new_line += line.substr(old_found_pos, new_found_pos - old_found_pos);

		// Copy s2 where s1 began
		new_line += s2;

		// Move the old position where the s1 ends in the line
		old_found_pos = new_found_pos + s1.length();
	}
	// Copy the rest of the string when no more s1 string found
	// If the s1 is at the end of a string, nothing is copied because
	// old_found_pos would equal to line.length()
	new_line += line.substr(old_found_pos);

	return new_line;
}
