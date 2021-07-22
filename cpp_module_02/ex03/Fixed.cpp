/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:15:04 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/22 18:47:55 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Fixed::Fixed(void) {
	_raw_bits = 0;
}

Fixed::Fixed(const int value) {
	// It's an int so there isn't any fractional part
	_raw_bits = value << _nb_fractional_bits;
}

Fixed::Fixed(const float value) {
	// Placing the decimal point 8 positions to the right
	_raw_bits = (int)(roundf(value * (1 << _nb_fractional_bits)));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

/*                                Destructors                                 */

Fixed::~Fixed(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */
Fixed& Fixed::operator=(const Fixed& other) {
	_raw_bits = other._raw_bits;

	return *this;
}

/*                                Comparison                                  */
bool Fixed::operator>(const Fixed& other) {
	return _raw_bits > other._raw_bits;
}

bool Fixed::operator<(const Fixed& other) {
	return _raw_bits < other._raw_bits;
}

bool Fixed::operator>=(const Fixed& other) {
	return _raw_bits >= other._raw_bits;
}

bool Fixed::operator<=(const Fixed& other) {
	return _raw_bits <= other._raw_bits;
}

bool Fixed::operator==(const Fixed& other) {
	return _raw_bits == other._raw_bits;
}

bool Fixed::operator!=(const Fixed& other) {
	return _raw_bits != other._raw_bits;
}

/*                                Arithmetic                                  */

Fixed Fixed::operator+(const Fixed& other) {
	Fixed ret = Fixed();
	ret.setRawBits(_raw_bits + other._raw_bits);
	return ret;
}

Fixed Fixed::operator-(const Fixed& other) {
	Fixed ret = Fixed();
	ret.setRawBits(_raw_bits - other._raw_bits);
	return ret;
}

Fixed Fixed::operator*(const Fixed& other) {
	Fixed ret = Fixed(this->toFloat() * other.toFloat());
	return ret;
}

Fixed Fixed::operator/(const Fixed& other) {
	Fixed ret = Fixed(this->toFloat() / other.toFloat());
	return ret;
}

/*                        Increment / decrement                               */

// Pre-increment
Fixed Fixed::operator++(void) {
	Fixed tmp;

	tmp.setRawBits(++_raw_bits);

	return tmp;
}

// Post-increment
Fixed Fixed::operator++(int) {
	Fixed tmp;

	tmp.setRawBits(_raw_bits++);

	return tmp;
}

// Pre-decrement
Fixed Fixed::operator--(void) {
	Fixed tmp;

	tmp.setRawBits(--_raw_bits);

	return tmp;
}

// Post-decrement
Fixed Fixed::operator--(int) {
	Fixed tmp;

	tmp.setRawBits(_raw_bits--);

	return tmp;
}

/*                                Insertion                                   */

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
	return _raw_bits;
}

void Fixed::setRawBits(int const raw) {
	_raw_bits = raw;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

/*                                Converters                                  */

int Fixed::toInt(void) const {
	// Leftshift to overwrite fractional part
	return _raw_bits >> _nb_fractional_bits;
}

float Fixed::toFloat(void) const {
	// Placing a decimal point at the 8th position from the right
	return (float)_raw_bits / (float)(1 << _nb_fractional_bits);
}

/*                                Min / max                                   */

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if ((Fixed&)a < b) {
		return a;
	} else {
		return b;
	}
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if ((Fixed&)a > b) {
		return a;
	} else {
		return b;
	}
}
