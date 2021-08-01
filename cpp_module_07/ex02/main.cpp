/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 10:52:39 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/01 12:07:32 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 10

int main(void) {

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    // testing deep copy
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    try {
        numbers[-2] = 0;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        numbers[MAX_VAL] = 0;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }

    delete[] mirror;

    return 0;
}
