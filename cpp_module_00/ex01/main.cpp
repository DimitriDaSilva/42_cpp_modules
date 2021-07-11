/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 12:38:54 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "YellowPages.hpp"

int	main() {
	std::cout << "Welcome to the infamous Yellow Pages!" << std::endl;

	YellowPages yp;

	yp.AddContact();

	return EXIT_SUCCESS;
}
