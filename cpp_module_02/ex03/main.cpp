/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/23 19:37:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

static void testing_point_class(void) {
	Point a;
	Point const b(3.14f, 42.42f);
	Point const c(b);

	a.printCoordinates();

	a = c;

	a.printCoordinates();
	b.printCoordinates();
	c.printCoordinates();
	std::cout << std::endl;
}

static void testing_bsp(void) {
	Point const a(0.0f, 0.0f);
	Point const b(2.0f, 2.0f);
	Point const c(2.5f, 1.0f);
	Point const p1(1.5f, 1.0f);
	Point const p2(1.5f, 0.5f);
	Point const p3(1.0f, 1.0f);
	Point const p4(-0.1f, -0.1f);
	Point const p5(1.0f, 0.5f);

	std::cout << "Test Point 1: " << (bsp(a, b, c, p1) ? "true" : "false") << std::endl;
	std::cout << "Test Point 2: " << (bsp(a, b, c, p2) ? "true" : "false") << std::endl;
	std::cout << "Test Point 3: " << (bsp(a, b, c, p3) ? "true" : "false") << std::endl;
	std::cout << "Test Point 4: " << (bsp(a, b, c, p4) ? "true" : "false") << std::endl;
	std::cout << "Test Point 5: " << (bsp(a, b, c, p5) ? "true" : "false") << std::endl;
}

int	main(void) {
	testing_point_class();
	testing_bsp();

	return 0;
}
