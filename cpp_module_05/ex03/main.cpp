/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 09:46:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 21:24:51 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Intern.hpp"
#include "Form.hpp"

int main(void) {

	Intern someRandomIntern;
	Form* form;

	form = someRandomIntern.makeForm("Presidential pardon form", "Bender");
	delete form;

	form = someRandomIntern.makeForm("Robotomy request form", "Bender");
	delete form;

	form = someRandomIntern.makeForm("Shrubbery creation form", "Bender");
	delete form;

	form = someRandomIntern.makeForm("Earth destruction request form", "Bender");
	delete form;
}
