#include "Cat.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Cat::Cat(void) {
	_type = "Cat";
}

Cat::Cat(Cat const& other) {
	*this = other;
}

/*                                Destructors                                 */

Cat::~Cat(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Cat& Cat::operator=(Cat const& other) {
	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Cat::makeSound(void) const {
	std::cout << "Meow!" << std::endl;
}
