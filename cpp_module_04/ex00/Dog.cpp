#include "Dog.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Dog::Dog(void) {
	std::cout << "Default Dog constructor called" << std::endl;

	_type = "Dog";
}

Dog::Dog(Dog const& other) {
	std::cout << "Copy Dog constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Dog& Dog::operator=(Dog const& other) {
	std::cout << "Dog assignation operator called" << std::endl;

	_type = other._type;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Dog::makeSound(void) const {
	std::cout << "Woof!" << std::endl;
}
