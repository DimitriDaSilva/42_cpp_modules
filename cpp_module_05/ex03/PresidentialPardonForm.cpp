/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:38:45 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

PresidentialPardonForm::PresidentialPardonForm(void) 
	: Form("Presidential pardon form",
			REQUIRED_GRADE_TO_SIGN_PPF,
			REQUIRED_GRADE_TO_EXECUTE_PPF) {
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target)
	: Form("Presidential pardon form",
			REQUIRED_GRADE_TO_SIGN_PPF,
			REQUIRED_GRADE_TO_EXECUTE_PPF) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other)
	: Form("Presidential pardon form",
			REQUIRED_GRADE_TO_SIGN_PPF,
			REQUIRED_GRADE_TO_EXECUTE_PPF) {
	*this = other;
}

/*                                Destructors                                 */

PresidentialPardonForm::~PresidentialPardonForm(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& other) {
	_target = other._target;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void PresidentialPardonForm::executeSpecificForm(void) const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
