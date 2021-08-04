/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:41:02 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/04 17:15:47 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <sstream>

static void test_subject(void) {
	std::cout << "*** test_subject ***" << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << std::endl;
}

static void test_10_numbers(void) {
	std::cout << "*** test_10_numbers ***" << std::endl;

	typedef MutantStack<int>::iterator iter;

	MutantStack<int> mstack;

	for (int i = 0; i < 10; i++) {
		mstack.push(i);
	}

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	for (iter it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
	}

	// Testing deepness
	std::stack<int> s(mstack);

	std::cout << std::endl;
}

static void test_10_string(void) {
	std::cout << "*** test_10_string ***" << std::endl;

	typedef MutantStack<std::string>::iterator iter;

	MutantStack<std::string> mstack;

	for (int i = 0; i < 10; i++) {
		std::ostringstream ss;
		ss << i;
		mstack.push(ss.str());
	}

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	for (iter it = mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
	}

	// Testing deepness
	std::stack<std::string> s(mstack);

	std::cout << std::endl;
}

int main(void) {
	test_subject();
	test_10_numbers();
	test_10_string();
}
