#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Cat : public Animal {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Cat(void);
		// Copy
		Cat(Cat const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Cat(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Cat& operator=(Cat const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void makeSound(void) const;
};

#endif
