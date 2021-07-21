/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/21 18:17:27 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	// It's an int so there isn't any fractional part
	_raw_bits = value << _nb_fractional_bits;
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	// Placing the decimal point 8 positions to the right
	_raw_bits = (int)(roundf(value * (1 << _nb_fractional_bits)));
}

Fixed::Fixed(const Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

Fixed& Fixed::operator=(const Fixed& obj) {
	std::cout << "Assignation operator called" << std::endl;
	_raw_bits = obj._raw_bits;

	return *this;
}

std::ostream& operator<<(std::ostream& output, const Fixed& obj) {
	// Output is the ongoing stream of output, to which we add something
	// then we return it so that they can continue adding to it or outputting
	// it to the stdout
	output << obj.toFloat();

	return output;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _raw_bits;
}

void Fixed::setRawBits(int const raw) {
	_raw_bits = raw;
}

/******************************************************************************/
/*                   	      OTHER FUNCTIONS                                 */
/******************************************************************************/

int Fixed::toInt(void) const {
	// Leftshift to overwrite fractional part
	return _raw_bits >> _nb_fractional_bits;
}

float Fixed::toFloat(void) const {
	// Placing a decimal point at the 8th position from the right
	return (float)_raw_bits / (float)(1 << _nb_fractional_bits);
}
