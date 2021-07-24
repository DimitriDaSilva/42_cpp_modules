#ifndef DOG_HPP
# define DOG_HPP

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
};

#endif
