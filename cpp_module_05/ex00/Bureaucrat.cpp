/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 16:15:25 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

Bureaucrat::Bureaucrat(void) : _name("Greg") {
	_grade = 1;
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name) {
	_grade = grade;
	checkGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) {
	*this = other;
}

/*                                Destructors                                 */

Bureaucrat::~Bureaucrat(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& other) {
	// We don't copy the name because it's const so we only copy grade
	_grade = other._grade;

	return *this;
}

/*                                Insertion                                   */

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();

	return output;
}

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

std::string const& Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void Bureaucrat::incrementGrade(void) {
	_grade--;
	checkGrade();
}

void Bureaucrat::decrementGrade(void) {
	_grade++;
	checkGrade();
}

void Bureaucrat::checkGrade(void) {
	if (_grade < MAX_GRADE) {
		throw GradeTooHighException();
	} else if (_grade > MIN_GRADE) {
		throw GradeTooLowException();
	}
}

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

const char* Bureaucrat::GradeTooHighException::what(void) const throw () {
	return "The grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw () {
	return "The grade is too low!";
}
