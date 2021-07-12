/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 19:29:04 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name);

int	main(void) {
	Zombie *zombie_horde = zombieHorde(10, "Gustavo");

	for (int i = 0; i < 10; i++) {
		zombie_horde[i].announce();
	}

	delete[] zombie_horde;

	return 0;
}
