/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassName.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 21:33:34 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSNAME_HPP
# define CLASSNAME_HPP

# include <iostream>
# include <string>

class ClassName {

	public:
/******************************************************************************/
/*                   	        PUBLIC DATA                                   */
/******************************************************************************/


/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ClassName(void);
		// Copy
		ClassName(ClassName const& other);

/*                                Destructors                                 */
		// Default
		virtual ~ClassName(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ClassName& operator=(ClassName const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/


/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

		class NameException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

	protected:
/******************************************************************************/
/*                   	       PROTECTED DATA                                 */
/******************************************************************************/


	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

};

/******************************************************************************/
/*                          NON-CLASS FUNCTIONS		                          */
/******************************************************************************/

#endif
