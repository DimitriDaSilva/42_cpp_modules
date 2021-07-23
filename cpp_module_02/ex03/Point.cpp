/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:18:47 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/23 19:47:56 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	_x = other._x;
	_y = other._y;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Point::printCoordinates(void) const {
	std::cout << "(x: " << _x << ", y: " << _y << ")" << std::endl;
}

// Area of a triangle formula modified (we don't divide by 2)
float Point::sign(Point p2, Point p3) {
	Fixed res;

	res = (this->_x - p3._x) * (p2._y - p3._y) - (p2._x - p3._x) * (this->_y - p3._y);

    return res.toFloat();
}
