/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:17:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/22 17:34:48 by dda-silv         ###   ########.fr       */
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

/*                                Constructors                                */
		// Default
		Fixed(void);
		// Type specific
		Fixed(const int value);
		Fixed(const float value);
		// Copy
		Fixed(const Fixed& other);

/*                                Destructors                                 */
		// Default
		~Fixed(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Fixed& operator=(const Fixed& other);

/*                                Comparison                                  */
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);

/*                                Arithmetic                                  */
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);

/*                        Increment / decrement                               */
		// Pre-increment
		Fixed operator++(void);
		// Post-increment
		Fixed operator++(int);
		// Pre-decrement
		Fixed operator--(void);
		// Post-decrement
		Fixed operator--(int);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		int getRawBits(void) const;
		void setRawBits(const int raw);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

/*                                Converters                                  */
		int toInt(void) const;
		float toFloat(void) const;

/*                                Min / max                                   */
		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);

	private:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

		int	_raw_bits;
		static const int _nb_fractional_bits = 8;
};

/******************************************************************************/
/*                          	NON-CLASS FUNCTIONS		                      */
/******************************************************************************/

/*                      Insertion overloading operator                        */
std::ostream& operator<<(std::ostream& output, const Fixed& obj);


#endif
