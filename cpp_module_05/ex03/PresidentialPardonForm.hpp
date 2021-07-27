/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:38:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# define REQUIRED_GRADE_TO_SIGN_PPF 25
# define REQUIRED_GRADE_TO_EXECUTE_PPF 5

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <string>

class PresidentialPardonForm : public Form {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		PresidentialPardonForm(void);
		// Type specific
		PresidentialPardonForm(std::string const& target);
		// Copy
		PresidentialPardonForm(PresidentialPardonForm const& other);

/*                                Destructors                                 */
		// Default
		~PresidentialPardonForm(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		PresidentialPardonForm& operator=(PresidentialPardonForm const& other);

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
