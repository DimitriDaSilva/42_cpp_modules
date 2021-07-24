/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 22:40:14 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 22:40:47 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Dog : public Animal {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Dog(void);
		// Copy
		Dog(Dog const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Dog(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Dog& operator=(Dog const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void makeSound(void) const;

	private:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

		Brain *_brain;
};

#endif
