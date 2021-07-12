/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 19:24:55 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::Zombie(void) {
}


Zombie::~Zombie(void) {
	std::cout << _name << 
		": Oh shiiit, here we go again"
		<< std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}

void Zombie::announce(void) {
	std::cout << _name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
