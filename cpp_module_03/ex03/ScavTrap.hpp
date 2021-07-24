/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:42:28 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 15:02:58 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <cmath>

class ScavTrap : virtual public ClapTrap {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ScavTrap(void);
		// Type specific
		ScavTrap(std::string const name);
		// Copy
		ScavTrap(ScavTrap const& other);

/*                                Destructors                                 */
		// Default
		~ScavTrap(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ScavTrap& operator=(ScavTrap const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void attack(std::string const& target);
		virtual void takeDamange(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		void guardGate(void);
};

#endif
