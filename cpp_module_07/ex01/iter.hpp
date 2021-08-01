/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:27:12 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 10:47:13 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T* arr, int len, void (*f)(T&)) {
	
	if (arr == NULL) {
		return;
	}

	for (int i = 0; i < len; i++) {
		f(arr[i]);
	}
}

#endif
