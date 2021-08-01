/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:05:26 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 10:47:26 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void is_even(int& n) {
	std::cout << ((n % 2) == 0 ? "even" : "odd") << std::endl;
}

void test_ints(void) {
	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	iter(arr, 10, is_even);

	delete[] arr;

	std::cout << std::endl;
}

void is_long_string(std::string& s) {
	std::cout << ((s.length() > (size_t)10) ? "long" : "short") << std::endl;
}

void test_strings(void) {
	std::string* strs = new std::string[3];
	strs[0] = "this is a long string";
	strs[1] = "short";
	strs[2] = "azertyuiopqsdfghjklmwxcvbn";

	iter(strs, 3, is_long_string);

	delete[] strs;
}

void test_wrong(void) {
	iter(static_cast<std::string*>(NULL), 100, is_long_string);
}


int main(void) {
	test_ints();
	test_strings();
	test_wrong();

	return 0;
}
