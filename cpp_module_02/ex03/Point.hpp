/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:18:46 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/23 19:31:40 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>
# include <string>
# include <cmath>

class Point {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Point(void);
		// Type specific
		Point(const float x, const float y);
		// Copy
		Point(const Point& other);

/*                                Destructors                                 */
		// Default
		~Point(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Point& operator=(const Point& other);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		void printCoordinates(void) const;
		float sign(Point p2, Point p3);

	private:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/
		Fixed _x;
		Fixed _y;

};

/******************************************************************************/
/*                          	NON-CLASS FUNCTIONS		                      */
/******************************************************************************/

#endif
