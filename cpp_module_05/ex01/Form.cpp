/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 12:33:04 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Form::Form(void)
	: _name("Greg"), _grade_to_sign(50), _grade_to_execute(10) {
	_is_signed = false;
}

Form::Form(std::string const& name, int grade_to_sign, int grade_to_execute)
	: _name(name),
	_grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute) {

}

Form::Form(Form const& other) {
	*this = other;
}

/*                                Destructors                                 */

Form::~Form(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Form& Form::operator=(Form const& other) {
	_is_signed = other._is_signed;

	return *this;
}

/*                                Insertion                                   */

std::ostream& operator<<(std::ostream& output, const Form& obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return output;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Form::checkGrade(int grade) {
	if (grade < MAX_GRADE) {
		GradeTooHighException e;
		throw GradeTooHighException();
	} else if (grade > MIN_GRADE) {
		throw GradeTooLowException();
	}
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Form::GradeTooHighException::what(void) const throw () {
	return "The grade is too high!";
}

const char* Form::GradeTooLowException::what(void) const throw () {
	return "The grade is too low!";
}
