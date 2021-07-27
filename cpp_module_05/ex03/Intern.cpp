/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 21:22:32 by dda-silv         ###   ########.fr       */
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
	Form* form = 0;
	int	i = 0;

	for (i = 0; i < NUMBER_FORMS; i++) {
		form = (this->*_forms[i])(target);
		if (form_name == form->getName()) {
			std::cout << "Intern created " << form_name << std::endl;
			break;
		}
		delete form;
		form = 0;
	}

	if (i == NUMBER_FORMS) {
		std::cout << "Intern couldn't create " << form_name
			<< " because it doesn't know how to do it..."
			<< std::endl;
	}

	return form;
}

Form* Intern::createShrubberyCreationForm(std::string const& target) {
	Form *form = new ShrubberyCreationForm(target);

	return form;
}

Form* Intern::createRobotomyRequestForm(std::string const& target) {
	Form *form = new RobotomyRequestForm(target);

	return form;
}

Form* Intern::createPresidentialPardonForm(std::string const& target) {
	Form *form = new PresidentialPardonForm(target);

	return form;
}
