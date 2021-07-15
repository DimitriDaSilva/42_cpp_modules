/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/15 12:47:28 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int get_level_index(char **levels, std::string level);

Karen::Karen(void) {
	funcs[0] = &Karen::debug;
	funcs[1] = &Karen::info;
	funcs[2] = &Karen::warning;
	funcs[3] = &Karen::error;
}

void Karen::complain(std::string level) {
	char *levels[NB_LEVELS] = {
		(char *)"calm",
		(char *)"pissed",
		(char *)"enraged",
		(char *)"godzilla"
	};
	int	index = get_level_index(levels, level);

	(this->*funcs[index])();
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
