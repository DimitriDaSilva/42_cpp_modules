/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:46:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:40:32 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

static void test_general_form_unvalid_sign(void) {
	std::cout << "*** test_general_form_unvalid_sign ***" << std::endl;

	ShrubberyCreationForm form("filename");
	Bureaucrat desk_jockey1("Phil", 146);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);

	std::cout << std::endl;
}

static void test_general_form_unvalid_execute(void) {
	std::cout << "*** test_general_form_unvalid_execute ***" << std::endl;

	ShrubberyCreationForm form("filename");
	Bureaucrat desk_jockey1("Phil", 142);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey1.executeForm(form);

	std::cout << std::endl;
}

static void test_shrubbery_creation_form(void) {
	std::cout << "*** test_shrubbery_creation_form ***" << std::endl;

	ShrubberyCreationForm form("lily");
	Bureaucrat desk_jockey1("Phil", 142);
	Bureaucrat desk_jockey2("Doug", 132);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

static void test_robotomy_request_form(void) {
	std::cout << "*** test_robotomy_request_form ***" << std::endl;

	RobotomyRequestForm form("Phil");
	Bureaucrat desk_jockey1("Phil", 70);
	Bureaucrat desk_jockey2("Doug", 42);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

static void test_presidential_pardon_form(void) {
	std::cout << "*** test_presidential_pardon_form ***" << std::endl;

	PresidentialPardonForm form("Phil");
	Bureaucrat desk_jockey1("Phil", 23);
	Bureaucrat desk_jockey2("Doug", 1);

	std::cout << form << std::endl;

	desk_jockey1.signForm(form);
	desk_jockey2.executeForm(form);

	std::cout << std::endl;
}

int main(void) {
	test_general_form_unvalid_sign();
	test_general_form_unvalid_execute();
	test_shrubbery_creation_form();
	test_robotomy_request_form();
	test_presidential_pardon_form();
}
