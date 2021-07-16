/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:17:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/16 15:42:17 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
	public:
		Fixed(int value = 0);
		Fixed(Fixed& obj);
		~Fixed(void);
		Fixed& operator=(Fixed& obj);

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int	_value;
		static const int _bits = 8;
};

#endif
