/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:41:16 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ICharacter::ICharacter(void) {
	_number_learned_materias = 0;
	_number_old_learned_materias = 0;
}

ICharacter::ICharacter(ICharacter const& other) {
	*this = other;
}

/*                                Destructors                                 */

ICharacter::~ICharacter(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

ICharacter& ICharacter::operator=(ICharacter const& other) {
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
