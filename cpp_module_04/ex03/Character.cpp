/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:41:31 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Character::Character(void) {
	_number_learned_materias = 0;
	_number_old_learned_materias = 0;
}

Character::Character(std::string const& name) {
	_name = name;
	_number_learned_materias = 0;
	_number_old_learned_materias = 0;
}

Character::Character(Character const& other) {
	*this = other;
}

/*                                Destructors                                 */

Character::~Character(void) {
	// Delete learned Materias and equipped
	for (int i = 0; i < _number_learned_materias; i++) {
		delete _inventory[i];
	}
	// Delete learned Materia and unequipped
	for (int i = 0; i < _number_old_learned_materias; i++) {
		delete _old_learned_materia[i];
	}
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Character& Character::operator=(Character const& other) {
	_name = other._name;

	// Delete Meteria of Character before copy
	for (int i = 0; i < _number_learned_materias; i++) {
		delete _inventory[i];
	}
	for (int i = 0; i < _number_old_learned_materias; i++) {
		delete _old_learned_materia[i];
	}

	// Copy existing Meteria of Character
	for (int i = 0; i < other._number_learned_materias; i++) {
		_inventory[i] = other._inventory[i]->clone();
	}
	for (int i = 0; i < other._number_old_learned_materias; i++) {
		_old_learned_materia[i] = other._old_learned_materia[i]->clone();
	}

	_number_learned_materias = other._number_learned_materias;
	_number_old_learned_materias = other._number_old_learned_materias;

	return *this;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string const& Character::getName() const {
	return _name;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Character::equip(AMateria* m) {
	// Trying to equip nonexistent Meteria or equip over max capacity
	if (m == nullptr) {
		return;
	} else if (_number_learned_materias >= MAX_CAPACITY) {
		std::cout << "Careful, we have a big boy here. "
			<< _number_learned_materias << " materias equipped he thinks "
			<< "he can learn some more " << m->getType() << "! Just stop" << std::endl;
		return;
	}

	// _number_learned_materias initialized to 0 in constructor
	// Materias equipped in order from index 0 to 3
	_inventory[_number_learned_materias] = m->clone();
	_number_learned_materias++;
}

void Character::unequip(int idx) {
	// Trying to unequip nonexistent Meteria
	if (idx < 0 || idx >= _number_learned_materias) {
		std::cout << "Sorry don't think I have that equipped" << std::endl;
		return;
	}

	// Adding this materia to the unequipped
	_old_learned_materia[_number_old_learned_materias] = _inventory[idx];
	_number_old_learned_materias++;

	// Parsing array offsetting all Materias one step to the left
	// If the index is the last, we don't enter the loop because we decrement
	// the _number_learned_materias so unequipped materia will be overwritten
	// by the next equip call
	//
	// int i = idx because we don't need to touch indexes before
	for (int i = idx; i < _number_learned_materias - 1; i++) {
		_inventory[i] = _inventory[i + 1];
	}
	_number_learned_materias--;
}

void Character::use(int idx, ICharacter& target) {
	// Trying to use nonexistent Meteria
	if (idx < 0 || idx >= _number_learned_materias) {
		std::cout << "Sorry don't think I have that equipped" << std::endl;
		return;
	}

	_inventory[idx]->use(target);
}
