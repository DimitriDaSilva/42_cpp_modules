/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 16:36:10 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 18:52:15 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>
#include <random>
# include <fstream>
# include <time.h>
# include <stdlib.h>

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

int main(void) {

	for (int i = 0; i < 10; i++) {
		std::cout << "Test " << i + 1 << ": ";
		Base* base = generate();

		identify(base);
		identify(*base);

		delete base;
	}

	return 0;
}

Base* generate(void) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0, 1);
	double random = dis(gen);
	Base* base;

	if (random <= 0.33f) {
		std::cout << "Generating A" << std::endl;
		base = new A();
	} else if (0.33f < random && random <= 0.66f) {
		std::cout << "Generating B" << std::endl;
		base = new B();
	} else {
		std::cout << "Generating C" << std::endl;
		base = new C();
	}

	return base;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(&p)) {
		std::cout << "C" << std::endl;
	}
}
