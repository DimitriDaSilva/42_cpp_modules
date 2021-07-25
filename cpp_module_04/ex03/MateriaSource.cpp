/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:29:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

MateriaSource::MateriaSource(void) {
	_number_learned_materias = 0;
}

MateriaSource::MateriaSource(MateriaSource const& other) {
	*this = other;
}

/*                                Destructors                                 */

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < _number_learned_materias; i++) {
		delete _learned_materias[i];
	}
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

MateriaSource& MateriaSource::operator=(MateriaSource const& other) {
	// Delete old Meteria before copy
	for (int i = 0; i < _number_learned_materias; i++) {
		delete _learned_materias[i];
	}

	// Copy existing Meteria
	for (int i = 0; i < other._number_learned_materias; i++) {
		*_learned_materias[i] = *other._learned_materias[i];
	}

	_number_learned_materias = other._number_learned_materias;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void MateriaSource::learnMateria(AMateria* m) {
	// Trying to learn nonexistent Meteria or learn over max capacity
	if (m == nullptr || _number_learned_materias >= MAX_CAPACITY) {
		std::cout << "Don't be too cocky, you already know "
			<< _number_learned_materias << " materias and now you're trying "
			<< "to learn " << m->getType() << "! Just stop" << std::endl;
		delete m;
		return;
	}

	// _number_learned_materias initialized to 0 in constructor
	// Materias learned in order from index 0 to 3
	_learned_materias[_number_learned_materias] = m;
	_number_learned_materias++;

}

AMateria* MateriaSource::createMateria(std::string const& type) {
	// Parse learned materias looking for the correct type
	for (int i = 0; i < _number_learned_materias; i++) {
		if (_learned_materias[i]->getType().compare(type) == 0) {
			return _learned_materias[i];
		}
	}

	// Return 0 if type unknown
	std::cout << "Don't know that materia" << std::endl;
	return 0;
}
