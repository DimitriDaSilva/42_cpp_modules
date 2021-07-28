/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/28 11:35:16 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# define REQUIRED_GRADE_TO_SIGN_RRF 72
# define REQUIRED_GRADE_TO_EXECUTE_RRF 45

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <time.h>
# include <stdlib.h>
# include <random>
# include <string>

	class RobotomyRequestForm : public Form {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		RobotomyRequestForm(void);
		// Type specific
		RobotomyRequestForm(std::string const& target);
		// Copy
		RobotomyRequestForm(RobotomyRequestForm const& other);

/*                                Destructors                                 */
		// Default
		~RobotomyRequestForm(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		RobotomyRequestForm& operator=(RobotomyRequestForm const& other);

/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		void executeSpecificForm(void) const;

	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		std::string _target;
};

#endif
