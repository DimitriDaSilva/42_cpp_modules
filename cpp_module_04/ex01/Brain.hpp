/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 22:37:11 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# define NUMBER_IDEAS 100

# include <iostream>
# include <string>
# include <cmath>

class Brain {

	public:
/******************************************************************************/
/*                   	          PUBLIC DATA                                 */
/******************************************************************************/

		std::string	_ideas[NUMBER_IDEAS];

/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Brain(void);
		// Copy
		Brain(Brain const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Brain(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Brain& operator=(Brain const& other);
		Brain* operator=(Brain const* other);
};

#endif
