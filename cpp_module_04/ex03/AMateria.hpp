/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 15:26:56 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

// Forward declaration to solve mutual dependence between classes
// AMateria and ICharacter
#include "ICharacter.hpp"
class ICharacter;

# include <iostream>
# include <string>
# include <cmath>

class AMateria {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		AMateria(void);
		// Type specific
		AMateria(std::string const& type);
		// Copy
		AMateria(AMateria const& other);

/*                                Destructors                                 */
		// Default
		virtual ~AMateria(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		AMateria& operator=(AMateria const& other);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		std::string const& getType() const;

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);

	protected:
/******************************************************************************/
/*                   	          PROTECTED DATA                              */
/******************************************************************************/

		std::string _type;
};

#endif
