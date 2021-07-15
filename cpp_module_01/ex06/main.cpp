/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/15 13:08:53 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char *argv[]) {
	Karen a_karen;

	if (argc != 2) {
		std::cerr << "Error: Invalid number of arguments" << std::endl;
		return 1;
	}

	a_karen.complain(argv[1]);

	return 0;
}
