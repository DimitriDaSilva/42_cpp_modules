/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 14:54:59 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 16:07:49 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <string>
# include <iostream>
# include <cstring>
#include <cstdint>

struct Data {
	int day;
	std::string month;
	int year;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
