#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>
# include <string>
# include <cmath>

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		DiamondTrap(void);
		// Type specific
		DiamondTrap(std::string const name);
		// Copy
		DiamondTrap(DiamondTrap const& other);

/*                                Destructors                                 */
		// Default
		~DiamondTrap(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		DiamondTrap& operator=(DiamondTrap const& other);

/******************************************************************************/
/*                   	    OTHER CLASS FUNCTIONS                             */
/******************************************************************************/

		virtual void attack(std::string const& target);
		virtual void takeDamange(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
		void whoAmI(void);


	private:
/******************************************************************************/
/*                   	          PRIVATE DATA                                */
/******************************************************************************/

		std::string	_clap_name;
};

#endif
