#include "Dog.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Dog::Dog(void) {
	_type = "Dog";
}

Dog::Dog(Dog const& other) {
	*this = other;
}

/*                                Destructors                                 */

Dog::~Dog(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Dog& Dog::operator=(Dog const& other) {
	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
