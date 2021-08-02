/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/02 16:02:25 by dda-silv         ###   ########.fr       */
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

int Span::shortestSpan(void) const {
	int shortest_span = 0;

	if (_vec.size() <= 1) {
		throw NotEnoughNumbersException();
	}

	std::sort(_vec.begin(), _vec.begin() + sizeof(int));

	std::cout << "myvector contains:";
	for (std::vector<int>::const_iterator it = _vec.begin(); it != _vec.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';

	return shortest_span;
}

int Span::longestSpan(void) const {
	int longest_span = 0;

	if (_vec.size() <= 1) {
		throw NotEnoughNumbersException();
	}

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
