/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 19:44:52 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Form::Form(void)
	: _name("IM"), _grade_to_sign(50), _grade_to_execute(10) {
	_is_signed = false;
}

Form::Form(std::string const& name, int grade_to_sign, int grade_to_execute)
	: _name(name),
	_grade_to_sign(grade_to_sign),
	_grade_to_execute(grade_to_execute) {
	
	_is_signed = false;

	checkGrade(_grade_to_sign);
	checkGrade(_grade_to_execute);
}

Form::Form(Form const& other)
	: _name(other._name),
	_grade_to_sign(other._grade_to_sign),
	_grade_to_execute(other._grade_to_execute) {

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
	output << "The form " << obj.getName()
		<< (obj.isSigned() ? " is" : " isn't")
		<< " signed. It requires a "
		<< obj.getGradeToSign() << " grade to be signed and a "
		<< obj.getGradeToExecute() << " grade to be executed.";

	return output;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string const& Form::getName(void) const {
	return _name;
}

int Form::getGradeToSign(void) const {
	return _grade_to_sign;
}

int Form::getGradeToExecute(void) const {
	return _grade_to_execute;
}

bool Form::isSigned(void) const {
	return _is_signed;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

/*                                Public                                      */

void Form::beSigned(Bureaucrat& desk_jockey) {
	if (desk_jockey.getGrade() > _grade_to_sign) {
		throw GradeTooLowException();
	} else {
		_is_signed = true;
	}
}

void Form::execute(Bureaucrat const& executor) const {
	if (!_is_signed) {
		throw NotSignedException();
	}
	else if (executor.getGrade() > _grade_to_execute) {
		throw GradeTooLowException();
	} else {
		executeSpecificForm();
	}
}

/*                                Private                                     */

void Form::checkGrade(int grade) {
	if (grade < MAX_GRADE) {
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

const char* Form::NotSignedException::what(void) const throw () {
	return "The form is not signed yet!";
}
