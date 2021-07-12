/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:06:48 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 19:25:18 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie *zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie_horde[i].setName(name);
	}

	return zombie_horde;
}
