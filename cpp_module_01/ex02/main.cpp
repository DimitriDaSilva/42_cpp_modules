/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:27:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 21:54:59 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	str_ptr = &str;
	std::string&	str_ref = str;

	std::cout << "&str:" << &str << std::endl;

	std::cout << "str_ptr:" << str_ptr << std::endl;
	std::cout << "&str_ref:" << &str_ref << std::endl;

	std::cout << "*str_ptr:" << *str_ptr << std::endl;
	std::cout << "str_ref:" << str_ref << std::endl;

	return 0;
}
