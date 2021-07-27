/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 19:42:18 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form {

	public:
/******************************************************************************/
/*                   	        PUBLIC DATA                                   */
/******************************************************************************/


/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Form(void);
		// Type specific
		Form(std::string const& name, int grade_to_sign, int grade_to_execute);
		// Copy
		Form(Form const& other);

/*                                Destructors                                 */
		// Default
		~Form(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Form& operator=(Form const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/

		std::string const& getName(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		bool isSigned(void) const;

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		void beSigned(Bureaucrat& desk_jockey);
		void execute(Bureaucrat const& executor) const;
		virtual void executeSpecificForm(void) const = 0;

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

		class GradeTooHighException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class NotSignedException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

	private:
/******************************************************************************/
/*                   	       PRIVATE FUNCTIONS                              */
/******************************************************************************/

		void checkGrade(int grade);

/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		std::string	const	_name;
		int const			_grade_to_sign;
		int const			_grade_to_execute;
		bool				_is_signed;
};

/******************************************************************************/
/*                          NON-CLASS FUNCTIONS		                          */
/******************************************************************************/

std::ostream& operator<<(std::ostream& output, const Form& obj);

#endif
