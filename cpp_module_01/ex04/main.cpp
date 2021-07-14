/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/14 12:48:04 by dda-silv         ###   ########.fr       */
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
		std::cerr << "Error: One of the strings is empty." << std::endl;
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
			//output_file << s2 << std::endl;
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
	std::size_t	found_pos;

	found_pos = line.find(s1);
	new_line = line.substr(0, found_pos);
	new_line += s2;
	new_line += line.substr(found_pos + s1.length());

	return new_line;
}
