/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/14 10:35:18 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int replace(std::string& filename, std::string& s1, std::string& s2);

int	main(int argc, char *argv[]) {
	std::string	filename;
	std::string	s1;
	std::string	s2;

	if (argc != 4) {
		std::cerr << "Error: Invalid arguments." << std::endl;
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

	while (std::getline(input_file, line)) {
		found_pos = line.find(s1);
		if (found_pos != std::string::npos) {
			output_file << s2 << std::endl;
		} else {
			output_file << line << std::endl;
		}
	}

	input_file.close();
	output_file.close();

	return EXIT_SUCCESS;
}
