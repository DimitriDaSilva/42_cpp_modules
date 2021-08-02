/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/02 10:20:20 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_HPP
# define DOUBLE_HPP

# include "ABase.hpp"
# include <iostream>
# include <sstream>
# include <string>
# include <float.h>

class Double : public ABase {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Double(void);
		// Type specific
		Double(std::string const& str_to_convert);
		// Copy
		Double(Double const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Double(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Double& operator=(Double const& other);

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

		double _converted_value;
};

#endif
