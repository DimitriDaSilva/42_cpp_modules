/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:43:21 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 15:09:37 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>

class ClapTrap {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		ClapTrap(void);
		// Type specific
		ClapTrap(std::string const name);
		// Copy
		ClapTrap(ClapTrap const& other);

/*                                Destructors                                 */
		// Default
		~ClapTrap(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		ClapTrap& operator=(ClapTrap const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		void attack(std::string const& target);
		void takeDamange(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy_pts;
		unsigned int	_attack_dmg;
};

#endif
