/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:17:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/21 18:18:08 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

		// Default
		Fixed();
		// Type specific
		Fixed(const int value);
		Fixed(const float value);
		// Copy
		Fixed(const Fixed& obj);

		// Default
		~Fixed(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

		Fixed& operator=(const Fixed& obj);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		int getRawBits(void) const;
		void setRawBits(const int raw);

/******************************************************************************/
/*                   	      OTHER FUNCTIONS                                 */
/******************************************************************************/

		int toInt(void) const;
		float toFloat(void) const;

/******************************************************************************/
	private:
		int	_raw_bits;
		static const int _nb_fractional_bits = 8;
};

/******************************************************************************/
/*                     NON-CLASS OVERLOADING OPERATORS                        */
/******************************************************************************/

std::ostream& operator<<(std::ostream& output, const Fixed& obj);

#endif
