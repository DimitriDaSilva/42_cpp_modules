#include "DiamondTrap.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

DiamondTrap::DiamondTrap(void) {
	std::cout << "Default DiamondTrap constructor called" << std::endl;

	_name = "P. Diamondtrappington";
	_clap_name = _name + "_clap_name";
	_hp = this->FragTrap::_hp;
	_energy_pts = this->ScavTrap::_energy_pts;
	_attack_dmg = this->FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(std::string const name) {
	std::cout << "String DiamonTrap constructor called" << std::endl;

	_name = name;
	_clap_name = name + "_clap_name";
	_hp = this->FragTrap::_hp;
	_energy_pts = this->ScavTrap::_energy_pts;
	_attack_dmg = this->FragTrap::_attack_dmg;
}

DiamondTrap::DiamondTrap(DiamondTrap const& other) {
	std::cout << "Copy DiamondTrap constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& other) {
	std::cout << "DiamondTrap assignation operator called" << std::endl;

	_name = other._name;
	_clap_name = other._clap_name;
	_hp = other._hp;
	_energy_pts = other._energy_pts;
	_attack_dmg = other._attack_dmg;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void DiamondTrap::attack(std::string const& target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::takeDamange(unsigned int amount) {
	if (_hp > amount) {
		_hp -= amount;
		std::cout << "DiamondTrap " << _name << " takes " << amount
		   << " of damage. It now has " << _hp << " hp left!" << std::endl;
	} else {
		_hp = 0;
		std::cout << "DiamondTrap " << _name << " takes " << amount
		   << " of damage. The attack killed it!" << std::endl;
	}
}

void DiamondTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	std::cout << "DiamondTrap " << _name
		<< " is being repaired... It gains " << amount
		<< " of hp. It now has " << _hp << " hp left!" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << _name << " and my clapTrap name is "
		<< _clap_name << std::endl;
}
