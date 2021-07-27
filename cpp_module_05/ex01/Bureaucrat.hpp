/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/27 12:20:20 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define MAX_GRADE 1
# define MIN_GRADE 150

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Bureaucrat(void);
		// Type specific
		Bureaucrat(std::string const& name, int grade);
		// Copy
		Bureaucrat(Bureaucrat const& other);

/*                                Destructors                                 */
		// Default
		~Bureaucrat(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Bureaucrat& operator=(Bureaucrat const& other);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/

		std::string const& getName(void) const;
		int getGrade(void) const;

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		void incrementGrade(void);
		void decrementGrade(void);

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

	private:
/******************************************************************************/
/*                   	       PRIVATE FUNCTIONS                              */
/******************************************************************************/

		void checkGrade(void);

/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

		std::string const	_name;
		int					_grade;
};

/******************************************************************************/
/*                          	NON-CLASS FUNCTIONS		                      */
/******************************************************************************/

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);


#endif
