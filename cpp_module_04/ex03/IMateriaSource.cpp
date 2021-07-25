/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:30:45 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

IMateriaSource::IMateriaSource(void) {
	_number_learned_materias = 0;
}

IMateriaSource::IMateriaSource(IMateriaSource const& other) {
	*this = other;
}

/*                                Destructors                                 */

IMateriaSource::~IMateriaSource(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& other) {
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
