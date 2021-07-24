/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:42:27 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 15:10:30 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

FragTrap::FragTrap(void) {
	std::cout << "Default FragTrap constructor called" << std::endl;

	_name = "P. Fragtrappington";
	_hp = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(std::string const name) {
	std::cout << "String FragTrap constructor called" << std::endl;

	_name = name;
	_hp = 100;
	_energy_pts = 100;
	_attack_dmg = 30;
}

FragTrap::FragTrap(FragTrap const& other) {
	std::cout << "Copy FragTrap constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

FragTrap& FragTrap::operator=(FragTrap const& other) {
	std::cout << "FragTrap assignation operator called" << std::endl;

	_name = other._name;
	_hp = other._hp;
	_energy_pts = other._energy_pts;
	_attack_dmg = other._attack_dmg;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void FragTrap::attack(std::string const& target) {
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
		<< _attack_dmg << " points of damange!" << std::endl;
}

void FragTrap::takeDamange(unsigned int amount) {
	if (_hp > amount) {
		_hp -= amount;
		std::cout << "FragTrap " << _name << " takes " << amount
		   << " of damage. It now has " << _hp << " hp left!" << std::endl;
	} else {
		_hp = 0;
		std::cout << "FragTrap " << _name << " takes " << amount
		   << " of damage. The attack killed it!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	std::cout << "FragTrap " << _name
		<< " is being repaired... It gains " << amount
		<< " of hp. It now has " << _hp << " hp left!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << _name << " requests the highest of high fives!"
		<< std::endl;
}
