/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ABase.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/02 13:59:49 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABASE_HPP
# define ABASE_HPP

# include <iostream>
# include <string>
# include <limits>

class ABase {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ABase(void);
		// Type specific
		ABase(std::string const& str_to_convert);
		// Copy
		ABase(ABase const& other);

/*                                Destructors                                 */
		// Default
		virtual ~ABase(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ABase& operator=(ABase const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/

		std::string getStrToConvert(void) const;
		void setStrToConvert(std::string const& str);

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		virtual std::string toChar(void) const = 0;
		virtual int toInt(void) const = 0;
		virtual float toFloat(void) const = 0;
		virtual double toDouble(void) const = 0;

	protected:
/******************************************************************************/
/*                   	       PROTECTED DATA                                 */
/******************************************************************************/

		std::string	_str_to_convert;
};

#endif
