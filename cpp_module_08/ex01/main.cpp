/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:18:50 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/03 19:12:49 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

static void test_empty(void) {
	std::cout << "*** test_empty ***" << std::endl;

	Span sp = Span(0);

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

static void test_one_number(void) {
	std::cout << "*** test_one_number ***" << std::endl;

	Span sp = Span(1);

	sp.addNumber(5);

	try {
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

static void test_add_more_than_max(void) {
	std::cout << "*** test_add_more_than_max ***" << std::endl;

	Span sp = Span(1);

	sp.addNumber(5);

	try {
		sp.addNumber(2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

static void test_positive(void) {
	std::cout << "*** test_positive ***" << std::endl;

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_negative(void) {
	std::cout << "*** test_negative ***" << std::endl;

	Span sp = Span(5);

	sp.addNumber(-5);
	sp.addNumber(-3);
	sp.addNumber(-17);
	sp.addNumber(-9);
	sp.addNumber(-11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_mixed(void) {
	std::cout << "*** test_mixed ***" << std::endl;

	Span sp = Span(5);

	sp.addNumber(-9);
	sp.addNumber(-3);
	sp.addNumber(1);
	sp.addNumber(11);
	sp.addNumber(17);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_int_min_max(void) {
	std::cout << "*** test_int_min_max ***" << std::endl;

	Span sp = Span(5);

	sp.addNumber(INT_MAX);
	sp.addNumber(INT_MIN);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addNumber(0);
	sp.addNumber(-1);
	sp.addNumber(1);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_duplicates(void) {
	std::cout << "*** test_duplicates ***" << std::endl;

	Span sp = Span(5);

	sp.addNumber(3);
	sp.addNumber(3);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp.addNumber(5);
	sp.addNumber(17);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_range(void) {
	std::cout << "*** test_range ***" << std::endl;

	srand(time(NULL));

	Span sp = Span(20000);
	std::vector<int> range(20000);

	for (Iter it = range.begin(); it != range.end(); it++) {
		*it = rand() % 20000 - 10000;
	}
	
	sp.addNumber(range.begin(), range.end());

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
}

static void test_range_add_more(void) {
	std::cout << "*** test_range_add_more ***" << std::endl;

	srand(time(NULL));

	Span sp = Span(10000);
	std::vector<int> range(20000);

	for (Iter it = range.begin(); it != range.end(); it++) {
		*it = rand() % 20000 - 10000;
	}
	
	try {
		sp.addNumber(range.begin(), range.end());
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

int main(void) {
	test_empty();
	test_one_number();
	test_add_more_than_max();
	test_positive();
	test_negative();
	test_mixed();
	test_int_min_max();
	test_duplicates();
	test_range();
	test_range_add_more();

	return 0;
}
