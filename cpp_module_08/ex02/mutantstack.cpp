/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/04 14:58:08 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
/*----------------------------------------------------------------------------*/
/*                   	    StackIterator class                               */
/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

template<class Vector>
StackIterator<Vector>::StackIterator(void) {}

template<class Vector>
StackIterator<Vector>::StackIterator(StackIterator<Vector> const& other) {
	*this = other;
}

/*                                Destructors                                 */

template<class Vector>
StackIterator<Vector>::~StackIterator(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

template<class Vector>
StackIterator<Vector>& StackIterator<Vector>::operator=(StackIterator<Vector> const& other) {

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

/*----------------------------------------------------------------------------*/
/*                   	         Stack class                                  */
/*----------------------------------------------------------------------------*/

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

template<class T>
MutantStack<T>::MutantStack(void) {}

template<class T>
MutantStack<T>::MutantStack(MutantStack<T> const& other) {
	*this = other;
}

/*                                Destructors                                 */

template<class T>
MutantStack<T>::~MutantStack(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

template<class T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const& other) {
	_stack = other._stack;

	return *this;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

template<class T>
StackIterator<T> MutantStack<T>::begin(void) {
	return StackIterator<T>(&_stack);
}

/******************************************************************************/
/*                       TEMPLATE INSTANTIALISATION                           */
/******************************************************************************/

// We need to tell the compiler which particular template class he will need
// that way we are forcing him to compile them
// Otherwise in the main, we'll be calling an undefined reference to
// MutantStack<int>()
template class MutantStack<int>;
