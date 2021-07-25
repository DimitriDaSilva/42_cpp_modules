/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 09:58:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/25 16:42:18 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

static void test_subject(void) {
	std::cout << "TESTING SUBJECT" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(1);

	delete bob;
	delete me;
	delete src;

}

static void test_materia_character(void) {
	std::cout << "TESTING MATERIA & CHARACTER" << std::endl;

	Ice ice_materia;
	Cure cure_materia;
	Character harry("harry");
	Character hermione("hermione");
	AMateria *clone = ice_materia.clone();

	ice_materia.use(harry);
	clone->use(harry);
	cure_materia.use(hermione);

	delete clone;
}

static void test_equipping(void) {
	std::cout << "TESTING EQUIPPING" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	Character ron("ron");
	Character voldemort("voldemort");

	AMateria* tmp;
	// Wrong material
	tmp = src->createMateria("dez");
	// Materia not yet learned
	tmp = src->createMateria("cure");

	// Trying to learn more than 4
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	// Trying to equip more than 4
	tmp = src->createMateria("cure");
	ron.equip(tmp);
	ron.equip(tmp);
	ron.equip(tmp);
	ron.equip(tmp);
	ron.equip(tmp);

	// Using wrong index
	ron.use(-1, voldemort);
	ron.use(42, voldemort);
	ron.use(4, voldemort);
	// Use correct
	ron.use(1, voldemort);

	// Unequip wrong one
	ron.unequip(-1);
	ron.unequip(42);
	// Unequip correct
	ron.unequip(2);

	delete src;

	std::cout << std::endl;
	std::cout << "TESTING DEEPNESS" << std::endl;

	if (1) {
		Character luna(ron);
		Character ginny = ron;
	}
	std::cout << "cool" << std::endl;
}

int main(void) {
	test_subject();
	std::cout << std::endl;
	test_materia_character();
	std::cout << std::endl;
	test_equipping();

	return 0;
}
