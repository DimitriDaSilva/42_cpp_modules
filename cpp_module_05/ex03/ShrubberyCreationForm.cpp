/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 20:19:02 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */

ShrubberyCreationForm::ShrubberyCreationForm(void) 
	: Form("Shrubbery creation form",
			REQUIRED_GRADE_TO_SIGN_SCF,
			REQUIRED_GRADE_TO_EXECUTE_SCF) {
	_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target)
	: Form("Shrubbery creation form",
			REQUIRED_GRADE_TO_SIGN_SCF,
			REQUIRED_GRADE_TO_EXECUTE_SCF) {
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other)
	: Form("Shrubbery creation form",
			REQUIRED_GRADE_TO_SIGN_SCF,
			REQUIRED_GRADE_TO_EXECUTE_SCF) {
	*this = other;
}

/*                                Destructors                                 */

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

/******************************************************************************/
/*                OVERLOADING OPERATORS (CLASS & NON-CLASS)                   */
/******************************************************************************/

/*                                Assignement                                 */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
	_target = other._target;

	return *this;
}

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

void ShrubberyCreationForm::executeSpecificForm(void) const {
	std::ofstream output_file;

	output_file.open(_target + "_shrubbery", std::ios::out | std::ios::app);
	if (!output_file.is_open()) {
		std::cerr << "Error: Could not open file." << std::endl;
		return;
	}

	output_file << "           ,@@@@@@@," << std::endl
				<< "   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
				<< ",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
				<< ",%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		   		<< "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
				<< "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		   		<< "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
				<< "    |o|        | |         | |" << std::endl
				<< "    |.|        | |         | |" << std::endl
				<< " \\/ ._\\/\\/_/__/  ,\\_//__\\/.  \\_//__/_";

	output_file.close();
}
