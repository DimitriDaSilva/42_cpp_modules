#include "Point.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Point::Point(void) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point& other) : _x(other._x), _y(other._y) {}

/*                                Destructors                                 */

Point::~Point(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Point& Point::operator=(const Point& other) {
	Point *new_point = new Point(other._x.toFloat(), other._y.toFloat());

	return *new_point;
}


/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Point::printCoordinates(void) const {
	std::cout << "x: " << _x << std::endl;
	std::cout << "y: " << _y << std::endl;
}
