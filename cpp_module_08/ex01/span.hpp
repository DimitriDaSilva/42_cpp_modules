/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 17:07:06 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 18:48:23 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <vector>
# include <climits>

typedef std::vector<int>::iterator Iter;

class Span {

	public:
/******************************************************************************/
/*                   	        PUBLIC DATA                                   */
/******************************************************************************/


/******************************************************************************/
/*                   	 CONSTRUCTORS & DESTRUCTORS                           */
/******************************************************************************/

/*                                Constructors                                */
		// Default
		Span(void);
		// Type specific
		Span(unsigned int N);
		// Copy
		Span(Span const& other);

/*                                Destructors                                 */
		// Default
		virtual ~Span(void);

/******************************************************************************/
/*                   	   OVERLOADING OPERATORS                              */
/******************************************************************************/

/*                                Assignement                                 */
		Span& operator=(Span const& other);

/******************************************************************************/
/*                   	    GETTERS & SETTERS                                 */
/******************************************************************************/


/******************************************************************************/
/*                   	   OTHER CLASS FUNCTIONS                              */
/******************************************************************************/

		void addNumber(Iter begin, Iter end);
		void addNumber(int n);
		unsigned long shortestSpan(void);
		unsigned long longestSpan(void);

/******************************************************************************/
/*                               EXCEPTIONS 								  */
/******************************************************************************/

		class LimitReachedException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

		class NotEnoughNumbersException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

	protected:
/******************************************************************************/
/*                   	       PROTECTED DATA                                 */
/******************************************************************************/


	private:
/******************************************************************************/
/*                   	        PRIVATE DATA                                  */
/******************************************************************************/

		unsigned int		_limit;
		std::vector<int>	_vec;
};

/******************************************************************************/
/*                          NON-CLASS FUNCTIONS		                          */
/******************************************************************************/

#endif
