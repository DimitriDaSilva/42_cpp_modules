/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:26:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# define MAX_CAPACITY 4
# define MAX_OLD_LEARNED_MATERIA 1000

// Forward declaration to solve mutual dependence between classes
// AMateria and ICharacter
#include "AMateria.hpp"
class AMateria;

# include <iostream>
# include <string>
# include <cmath>

class ICharacter {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ICharacter(void);
		// Copy
		ICharacter(ICharacter const& other);

/*                                Destructors                                 */
		// Default
		virtual ~ICharacter(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ICharacter& operator=(ICharacter const& other);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		virtual std::string const& getName() const = 0;

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;

	protected:
/******************************************************************************/
/*                   	          PROTECTED DATA                              */
/******************************************************************************/

		std::string	_name;
		AMateria	*_inventory[MAX_CAPACITY];
		int			_number_learned_materias;
		AMateria	*_old_learned_materia[MAX_OLD_LEARNED_MATERIA];
		int			_number_old_learned_materias;
};

#endif
