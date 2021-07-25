/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 23:09:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Brain::Brain(void) {
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& other) {
	std::cout << "Copy Brain constructor called" << std::endl;

	*this = other;
}

/*                                Destructors                                 */

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                  */

Brain& Brain::operator=(Brain const& other) {
	std::cout << "Brain assignation & operator called" << std::endl;

	for (int i = NUMBER_IDEAS; i < NUMBER_IDEAS; i++) {
		this->_ideas[i] = other._ideas[i];
	}

	return *this;
}
