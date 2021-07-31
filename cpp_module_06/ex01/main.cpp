/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 14:54:28 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 16:24:37 by dda-silv         ###   ########.fr       */
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

	std::cout << sizeof(data) << std::endl;
	std::cout << sizeof(&data.day) << std::endl;
	std::cout << sizeof(data.month) << std::endl;
	std::cout << sizeof(&data.year) << std::endl;

	std::cout << "Day: " << data.day << std::endl;
	std::cout << "Month: " << data.month << std::endl;
	std::cout << "Year: " << data.year << std::endl;

	raw = serialize(&data);
	cpy = deserialize(raw);

	std::cout << "Day: " << cpy->day << std::endl;
	std::cout << "Month: " << cpy->month << std::endl;
	std::cout << "Year: " << cpy->year << std::endl;

	delete cpy;

	return 0;
}

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	Data* ret = new Data();

	ret->day = *(reinterpret_cast<int *>(raw));
	ret->month = std::string(reinterpret_cast<char *>(raw + 24), 4);
	ret->year = *(reinterpret_cast<int *>(raw + 40));

	return ret;
}
