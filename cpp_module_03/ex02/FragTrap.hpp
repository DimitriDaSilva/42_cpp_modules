/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:42:28 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 11:56:52 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <cmath>

class FragTrap : public ClapTrap {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		FragTrap(void);
		// Type specific
		FragTrap(std::string const name);
		// Copy
		FragTrap(FragTrap const& other);

/*                                Destructors                                 */
		// Default
		~FragTrap(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		FragTrap& operator=(FragTrap const& other);

/******************************************************************************/
/*                   	     GETTERS & SETTERS                                */
/******************************************************************************/


/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void attack(std::string const& target);
		virtual void takeDamange(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		void highFivesGuys(void);


	private:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

};

/******************************************************************************/
/*                          	NON-CLASS FUNCTIONS		                      */
/******************************************************************************/

#endif
