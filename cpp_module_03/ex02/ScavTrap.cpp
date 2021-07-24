/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:42:27 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 11:22:30 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ScavTrap::ScavTrap(void) {
	std::cout << "Default ScavTrap constructor called" << std::endl;

	_name = "P. Scavtrappington";
	_hp = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(std::string const name) {
	std::cout << "String ScavTrap constructor called" << std::endl;

	_name = name;
	_hp = 100;
	_energy_pts = 50;
	_attack_dmg = 20;
}

ScavTrap::ScavTrap(ScavTrap const& other) {
	std::cout << "Copy ScavTrap constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
ScavTrap& ScavTrap::operator=(ScavTrap const& other) {
	std::cout << "ScavTrap assignation operator called" << std::endl;

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

void ScavTrap::attack(std::string const& target) {
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _attack_dmg << " points of damange!" << std::endl;
}

void ScavTrap::takeDamange(unsigned int amount) {
	if (_hp > amount) {
		_hp -= amount;
		std::cout << "ScavTrap " << _name << " takes " << amount
		   << " of damage. It now has " << _hp << " hp left!" << std::endl;
	} else {
		_hp = 0;
		std::cout << "ScavTrap " << _name << " takes " << amount
		   << " of damage. The attack killed it!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	std::cout << "ScavTrap " << _name
		<< " is being repaired... It gains " << amount
		<< " of hp. It now has " << _hp << " hp left!" << std::endl;
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " has now enterred in Gate keeper mode!"
		<< std::endl;
}
