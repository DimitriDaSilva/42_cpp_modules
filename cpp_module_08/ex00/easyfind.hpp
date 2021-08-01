/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:11:19 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 20:10:10 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

// Sequence containers
#include <array>
#include <vector>
#include <list>
#include <deque>

template<typename TContainer>
int easyfind(TContainer const& container, int to_find) {
	typedef typename TContainer::const_iterator Iter;

	int i = 0;

	for (Iter it = container.begin(); it != container.end(); ++it) {
		if (*it == to_find) {
			return i;
		}
		i++;
	}

	return -1;
}

#endif
