#include "Point.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Point::Point(void) {
}

Point::Point(const int value) {
}

Point::Point(const Point& other) {
	*this = other;
}

/*                                Destructors                                 */

Point::~Point(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Point& Point::operator=(const Point& other) {

	return *this;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/
