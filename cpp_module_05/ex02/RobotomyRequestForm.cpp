/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:37:12 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

RobotomyRequestForm::RobotomyRequestForm(void) 
	: Form("Robotomy request form",
			REQUIRED_GRADE_TO_SIGN_RRF,
			REQUIRED_GRADE_TO_EXECUTE_RRF) {
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target)
	: Form("Robotomy request form",
			REQUIRED_GRADE_TO_SIGN_RRF,
			REQUIRED_GRADE_TO_EXECUTE_RRF) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
	: Form("Robotomy request form",
			REQUIRED_GRADE_TO_SIGN_RRF,
			REQUIRED_GRADE_TO_EXECUTE_RRF) {
	*this = other;
}

/*                                Destructors                                 */

RobotomyRequestForm::~RobotomyRequestForm(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& other) {
	_target = other._target;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void RobotomyRequestForm::executeSpecificForm(void) const {
	std::srand(time(NULL));

	std::cout << "* DRILLING NOISE *" << std::endl;
	bool is_robotomy_successful = (std::rand() / double(RAND_MAX))  >= 0.5f ? true : false;
	if (is_robotomy_successful) {
		std::cout << "The operation was a success! Poor " << _target << std::endl;
	} else {
		std::cout << "The operation was a failure, he's dead! Poor " << _target << std::endl;
	}
}
