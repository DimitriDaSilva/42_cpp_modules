#include "ClassName.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ClassName::ClassName(void) {
}

ClassName::ClassName(const int value) {
}

ClassName::ClassName(const ClassName& other) {
	*this = other;
}

/*                                Destructors                                 */

ClassName::~ClassName(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
ClassName& ClassName::operator=(const ClassName& other) {

	return *this;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/
