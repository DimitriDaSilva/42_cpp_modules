/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 21:32:29 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Intern::Intern(void) {
	_forms[0] = &Intern::createShrubberyCreationForm;
	_forms[1] = &Intern::createRobotomyRequestForm;
	_forms[2] = &Intern::createPresidentialPardonForm;
}

Intern::Intern(Intern const& other) {
	_forms[0] = &Intern::createShrubberyCreationForm;
	_forms[1] = &Intern::createRobotomyRequestForm;
	_forms[2] = &Intern::createPresidentialPardonForm;

	*this = other;
}

/*                                Destructors                                 */

Intern::~Intern(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Intern& Intern::operator=(Intern const& other) {
	(void)other;
	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

Form* Intern::makeForm(std::string const& form_name, std::string const& target) {
	Form* form;
	int	i = 0;

	// Creating all forms and checking if it's the correct one
	// If it is return
	// If not we delete it and continue
	for (i = 0; i < NUMBER_FORMS; i++) {
		form = (this->*_forms[i])(target);
		if (form_name == form->getName()) {
			std::cout << "Intern created " << form_name << std::endl;
			return form;
		}
		delete form;
	}

	// If we checked all potential forms without success then wrong form name
	std::cout << "Intern couldn't create " << form_name
		<< " because it doesn't know how to do it..."
		<< std::endl;
	return 0;
}

Form* Intern::createShrubberyCreationForm(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyRequestForm(std::string const& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialPardonForm(std::string const& target) {
	return new PresidentialPardonForm(target);
}
