/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 16:11:18 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 20:07:42 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename TContainer>
static void test(TContainer const& c, int n) {
	int index = 0;

	std::cout << "Trying to find " << n << "...";
	if ((index = easyfind(c, n)) != -1) {
		std::cout << "Found it at index " << index << std::endl;
	} else {
		std::cout << "Couldn't find it" << std::endl;
	}

}

static void test_array(void) {
	std::cout << "*** test_array ***" << std::endl;

	std::array<int, 10> arr;
	int j = 0;

	for (std::array<int, 10>::iterator it = arr.begin(); it != arr.end(); ++it) {
		*it = j;
		j++;
	}

	test(arr, -42);
	test(arr, -1);
	test(arr, 4);
	test(arr, 7);
	test(arr, 10);
	test(arr, 42);

	std::cout << std::endl;
}

static void test_vector(void) {
	std::cout << "*** test_vector ***" << std::endl;

	std::vector<int> vec;

	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	test(vec, -42);
	test(vec, -1);
	test(vec, 4);
	test(vec, 7);
	test(vec, 10);
	test(vec, 42);

	std::cout << std::endl;
}

static void test_list(void) {
	std::cout << "*** test_list ***" << std::endl;

	std::list<int> list;

	for (int i = 0; i < 10; i++) {
		list.push_back(i);
	}


	test(list, -42);
	test(list, -1);
	test(list, 4);
	test(list, 7);
	test(list, 10);
	test(list, 42);

	std::cout << std::endl;
}

static void test_deque(void) {
	std::cout << "*** test_deque ***" << std::endl;

	std::deque<int> deque;

	for (int i = 0; i < 10; i++) {
		deque.push_back(i);
	}

	test(deque, -42);
	test(deque, -1);
	test(deque, 4);
	test(deque, 7);
	test(deque, 10);
	test(deque, 42);

	std::cout << std::endl;
}

int main(void) {
	test_array();
	test_vector();
	test_list();
	test_deque();

	return 0;
}
