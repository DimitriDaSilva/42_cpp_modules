/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/28 11:46:27 by dda-silv         ###   ########.fr       */
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
	std::random_device rd;
	std::mt19937 gen(rd());
	//uniform distribution between 0 and 1
	std::uniform_real_distribution<> dis(0, 1);
	bool is_robotomy_successful = dis(gen)  >= 0.5f ? true : false;

	std::cout << "* DRILLING NOISE *" << std::endl;

	if (is_robotomy_successful) {
		std::cout << "The operation was a success! Poor " << _target << std::endl;
	} else {
		std::cout << "The operation was a failure, he's dead! Poor " << _target << std::endl;
	}
}
