/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:44:57 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/13 11:37:38 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << _name << " attacks with his "
		<< _weapon->getType() << std::endl;
}
