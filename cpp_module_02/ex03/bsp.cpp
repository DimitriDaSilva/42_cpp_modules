/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 18:18:44 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/23 19:51:17 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Check if point is triangle (a, b, c)
bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Point cpy_point = point;
	bool b1, b2, b3;

	// All b1, b2 and b3 tests need to be equal for the point to be in the triangle
	b1 = cpy_point.sign(a, b) < 0.0f;
	b2 = cpy_point.sign(b, c) < 0.0f;
	b3 = cpy_point.sign(c, a) < 0.0f;

	return ((b1 == b2) && (b2 == b3));
}
