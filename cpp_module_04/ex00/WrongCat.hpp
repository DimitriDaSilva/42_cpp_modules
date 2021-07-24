/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:33 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:07:42 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>
# include <cmath>

class WrongCat : public WrongAnimal {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		WrongCat(void);
		// Copy
		WrongCat(WrongCat const& other);

/*                                Destructors                                 */
		// Default
		virtual ~WrongCat(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		WrongCat& operator=(WrongCat const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void makeSound(void) const;
};

#endif
