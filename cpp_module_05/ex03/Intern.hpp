/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 21:25:29 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# define NUMBER_FORMS 3

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"
# include <iostream>
# include <string>

class Intern {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Intern(void);
		// Copy
		Intern(Intern const& other);

/*                                Destructors                                 */
		// Default
		~Intern(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Intern& operator=(Intern const& other);

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		Form* makeForm(std::string const& form_name, std::string const& target);
		Form* createShrubberyCreationForm(std::string const& target);
		Form* createRobotomyRequestForm(std::string const& target);
		Form* createPresidentialPardonForm(std::string const& target);

	private:
		typedef Form* (Intern::*func)(std::string const&);

		func _forms[NUMBER_FORMS];
};

#endif
