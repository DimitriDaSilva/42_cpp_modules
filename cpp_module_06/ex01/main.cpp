/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 14:54:28 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 16:01:09 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void) {
	Data data = {
		.day = 13,
		.month = "July",
		.year = 1995,
	};
	uintptr_t raw;
	Data* cpy;

	std::cout << "Day: " << data.day << std::endl;
	std::cout << "Month: " << data.month << std::endl;
	std::cout << "Year: " << data.year << std::endl;

	raw = serialize(&data);
	cpy = deserialize(raw);

	std::cout << "Day: " << cpy->day << std::endl;
	std::cout << "Month: " << cpy->month << std::endl;
	std::cout << "Year: " << cpy->year << std::endl;

	return 0;
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
