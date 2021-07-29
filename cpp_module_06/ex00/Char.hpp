/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/29 19:54:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_HPP
# define CHAR_HPP

# include "ABase.hpp"
# include <iostream>
# include <string>

class Char : public ABase {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Char(void);
		// Type specific
		Char(std::string const& str_to_convert);
		// Copy
		Char(Char const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Char(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Char& operator=(Char const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/


/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		char toChar(void) const;
		int toInt(void) const;
		float toFloat(void) const;
		double toDouble(void) const;

	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		char _converted_value;
};

#endif
