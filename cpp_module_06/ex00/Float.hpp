/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 12:11:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_HPP
# define FLOAT_HPP

# include "ABase.hpp"
# include <iostream>
# include <sstream>
# include <string>

class Float : public ABase {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Float(void);
		// Type specific
		Float(std::string const& str_to_convert);
		// Copy
		Float(Float const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Float(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Float& operator=(Float const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/


/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		std::string toChar(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		double toDouble(void) const;

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

		class NonDisplayableException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class ImpossibleException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class NanException : public std::exception {
			public:
				NanException(std::string const& msg);
				virtual const char* what(void) const throw ();
				virtual ~NanException(void) throw();
			private:
				std::string _msg;
		};

	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		float _converted_value;
};

#endif
