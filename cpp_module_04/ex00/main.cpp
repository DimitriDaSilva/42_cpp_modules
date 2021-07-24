/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 16:19:05 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 17:04:27 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

static void test_correct(void) {
	Animal const* meta = new Animal();
	Animal const* dog = new Dog();
	Animal const* cat = new Cat();

	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete dog;
	delete cat;
}

static void test_wrong(void) {
	WrongAnimal const* meta = new WrongAnimal();
	WrongAnimal const* cat = new WrongCat();

	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	meta->makeSound();

	delete meta;
	delete cat;
}

int main(void) {
	test_correct();
	std::cout << std::endl;
	test_wrong();

	return 0;
}
