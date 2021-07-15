/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/15 14:11:51 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int get_level_index(char **levels, std::string level);

void Karen::complain(std::string level) {
	char *levels[NB_LEVELS] = {
		(char *)"DEBUG",
		(char *)"INFO",
		(char *)"WARNING",
		(char *)"ERROR"
	};
	int	index = get_level_index(levels, level);

	switch (index) {
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
			break;
		case 0:
			std::cout << "[ " << levels[0] << " ]" << std::endl;
			debug();
			std::cout << std::endl;
		case 1:
			std::cout << "[ " << levels[1] << " ]" << std::endl;
			info();
			std::cout << std::endl;
		case 2:
			std::cout << "[ " << levels[2] << " ]" << std::endl;
			warning();
			std::cout << std::endl;
		case 3:
			std::cout << "[ " << levels[3] << " ]" << std::endl;
			error();
			std::cout << std::endl;
	}
}

void Karen::debug(void) {
	std::cout << "I love to get extra bacon "
		"for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
		"I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra "
		"bacon cost more money. You don’t put enough! If you did I would not "
		"have to ask for it!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
		"been coming here for years and you just started working "
		"here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

int get_level_index(char **levels, std::string level) {
	for (int i = 0; i < NB_LEVELS; i++) {
		std::string cpp_string(levels[i]);
		if (cpp_string.compare(level) == 0) {
			return i;
		}
	}
	return -1;
}
