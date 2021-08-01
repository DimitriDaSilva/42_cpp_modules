/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:05:34 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 10:25:14 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {

	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T& min(T& a, T& b) {
	
	return (a < b ? a : b);
}

template <typename T>
T& max(T& a, T& b) {
	
	return (a > b ? a : b);
}

# include <iostream>
# include <string>

#endif
