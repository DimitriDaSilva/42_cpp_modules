/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:19:02 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# define REQUIRED_GRADE_TO_SIGN_SCF 145
# define REQUIRED_GRADE_TO_EXECUTE_SCF 137

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <string>

class ShrubberyCreationForm : public Form {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ShrubberyCreationForm(void);
		// Type specific
		ShrubberyCreationForm(std::string const& target);
		// Copy
		ShrubberyCreationForm(ShrubberyCreationForm const& other);

/*                                Destructors                                 */
		// Default
		~ShrubberyCreationForm(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		void executeSpecificForm(void) const;

	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		std::string _target;
};

#endif
