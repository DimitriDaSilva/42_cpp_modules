/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:19:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 23:09:24 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NUMBER_ANIMALS 6

static void test_simple(void) {
	std::cout << "TEST SIMPLE" << std::endl;

	Animal const* dog = new Dog();
	Animal const* cat = new Cat();

	delete dog;
	delete cat;
}

static void test_array(void) {
	std::cout << "TEST ARRAY" << std::endl;

	Animal const* animals[NUMBER_ANIMALS];

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		if (i % 2 == 0) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	for (int i = 0; i < NUMBER_ANIMALS; i++) {
		delete animals[i];
	}
}

static void test_deepness(void) {
	std::cout << "TEST DEEPNESS" << std::endl;

	Dog outter_scope;
	
	if (1) {
		Dog inner_scope1 = outter_scope;
		Dog inner_scope2(outter_scope);
	}
}

int main(void) {
	test_simple();
	std::cout << std::endl;
	test_array();
	std::cout << std::endl;
	test_deepness();

	return 0;
}
