/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 15:29:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <iostream>
# include <string>
# include <cmath>

class IMateriaSource {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		IMateriaSource(void);
		// Copy
		IMateriaSource(IMateriaSource const& other);

/*                                Destructors                                 */
		// Default
		virtual ~IMateriaSource(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		IMateriaSource& operator=(IMateriaSource const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void learnMateria(AMateria* m) = 0;
		virtual AMateria* createMateria(std::string const& type) = 0;

	protected:
/******************************************************************************/
/*                   	          PROTECTED DATA                              */
/******************************************************************************/

		AMateria	*_learned_materias[MAX_CAPACITY];
		int			_number_learned_materias;
};

#endif
