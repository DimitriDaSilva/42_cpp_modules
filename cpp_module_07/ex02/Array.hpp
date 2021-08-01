/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 12:08:08 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstring>
# include <iostream>
# include <string>
# include <exception>

template<typename T> class Array {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Array(void) {
			// Empty array
			_size = 1;
			_array = new T[_size];

		}
		Array(unsigned int n) {
			_size = n;
			_array = new T[_size];

			// Default init
			std::memset(_array, 0, _size * sizeof(*_array));
		}
		// Copy
		Array(Array const& other) {
			// We need to create empty array so that operator= can delete it
			_size = 1;
			_array = new T[_size];

			*this = other;
		}

/*                                Destructors                                 */
		// Default
		virtual ~Array(void) {
			delete[] _array;
		}

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Array& operator=(Array const& other) {
			// Deleting old array
				delete[] _array;

			_size = other._size;
			_array = new T[_size];

			// Deep copy
			for (int i = 0; i < (int)_size; i++) {
				_array[i] = other._array[i];
			}

			return *this;
		}

/*                                  Access                                    */
		// Write
		T& operator[](int i) {
			if (i < 0 || (int)_size <= i) {
				throw std::exception();
			} else {
				return _array[i];
			}
		}

		// Read
		T const& operator[](int i) const {
			if (i < 0 || (int)_size <= i) {
				throw std::exception();
			} else {
				return _array[i];
			}
		}

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/

		unsigned int size(void) const {
			return _size;
		}

	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		T*				_array;
		unsigned int	_size;
};

#endif
