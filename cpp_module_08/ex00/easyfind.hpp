/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:11:19 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/07 17:00:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>

// Sequence containers
#include <array>
#include <vector>
#include <list>
#include <deque>

class NumberNotFoundException : public std::exception {
	const char* what(void) const throw () {
		return "Error: Number not found";
	}
};

template<typename TContainer>
typename TContainer::const_iterator easyfind(TContainer const& container, int to_find) {
	typedef typename TContainer::const_iterator Iter;

	Iter begin = container.begin();
	Iter end = container.end();
	Iter pos = std::find(begin, end, to_find);

	// Find returns containter.end() if not found
	if (pos != end) {
		return pos;
	} else {
		throw NumberNotFoundException();
	}
}

#endif
