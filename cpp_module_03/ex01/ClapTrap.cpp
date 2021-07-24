/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:43:22 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 10:19:55 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor called" << std::endl;

	_name = "P. Claptrappington";
	_hp = 10;
	_energy_pts = 10;
	_attack_dmg = 0;
}

ClapTrap::ClapTrap(std::string const name) {
	std::cout << "String constructor called" << std::endl;

	_name = name;
	_hp = 10;
	_energy_pts = 10;
	_attack_dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap const& other) {
	std::cout << "Copy constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
ClapTrap& ClapTrap::operator=(ClapTrap const& other) {
	std::cout << "Assignation operator called" << std::endl;

	_name = other._name;
	_hp = other._hp;
	_energy_pts = other._energy_pts;
	_attack_dmg = other._attack_dmg;

	return *this;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _attack_dmg << " points of damange!" << std::endl;
}

void ClapTrap::takeDamange(unsigned int amount) {
	if (_hp > amount) {
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount
		   << " of damage. He now has " << _hp << " hp left!" << std::endl;
	} else {
		_hp = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount
		   << " of damage. The attack killed him!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	std::cout << "ClapTrap " << _name
		<< " is being repaired... He gains " << amount
		<< " of hp. He now has " << _hp << " hp left!" << std::endl;
}
