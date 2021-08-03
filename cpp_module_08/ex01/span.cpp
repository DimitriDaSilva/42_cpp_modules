/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 19:12:57 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Span::Span(void) {
	_limit = 0;
}

Span::Span(unsigned int N) {
	_limit = N;
}

Span::Span(Span const& other) {
	*this = other;
}

/*                                Destructors                                 */

Span::~Span(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Span& Span::operator=(Span const& other) {
	_limit = other._limit;
	_vec = other._vec;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Span::addNumber(int n) {
	if (_vec.size() == _limit) {
		throw LimitReachedException();
	} else {
		_vec.push_back(n);
	}
}

void Span::addNumber(Iter begin, Iter end) {
	if (_vec.size() + std::distance(begin, end) > _limit) {
		throw LimitReachedException();
	} else {
		_vec.insert(_vec.end(), begin, end);
	}
}

unsigned long Span::shortestSpan(void) {
	// Giving it the max possible value so that the first test changes the value
	unsigned long shortest_span = ULONG_MAX;
	unsigned long tmp;

	// Check if 0 or 1 numbers
	if (_vec.size() <= 1) {
		throw NotEnoughNumbersException();
	}

	// Sort it to make it easier to check
	std::sort(_vec.begin(), _vec.end());

	// We parse the vector checking the difference between each contiguous value
	for (int i = 0; i < (int)_vec.size() - 1; i++) {
		tmp = (long long)_vec[i + 1] - (long long)_vec[i];
		if (tmp < shortest_span) {
			shortest_span = tmp;
		}
	}

	return shortest_span;
}

unsigned long Span::longestSpan(void) {
	unsigned long longest_span = 0;
	int max = 0;
	int min = 0;

	// Check if 0 or 1 numbers
	if (_vec.size() <= 1) {
		throw NotEnoughNumbersException();
	}

	// Difference between max and min is the longest span
	max = (long long)(*std::max_element(_vec.begin(), _vec.end()));
	min = (long long)(*std::min_element(_vec.begin(), _vec.end()));
	longest_span = max - min;

	return longest_span;
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Span::LimitReachedException::what(void) const throw () {
	return "Limit of numbers reached";
}

const char* Span::NotEnoughNumbersException::what(void) const throw () {
	return "Not enough numbers";
}
