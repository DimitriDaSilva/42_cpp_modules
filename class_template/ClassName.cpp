#include "ClassName.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ClassName::ClassName(void) {
}

ClassName::ClassName(int const value) {
}

ClassName::ClassName(ClassName const& other) {
	*this = other;
}

/*                                Destructors                                 */

ClassName::~ClassName(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
ClassName& ClassName::operator=(ClassName const& other) {

	return *this;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/
