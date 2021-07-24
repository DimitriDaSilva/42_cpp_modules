/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:43:20 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 14:58:10 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void test_claptrap(void) {
	ClapTrap bot1;
	ClapTrap bot2("Robocop");
	ClapTrap bot3("Model 101 (aka The Terminator)");
	ClapTrap bot4("Alexa");

	bot1.attack("Robocop");
	bot2.takeDamange(2);

	bot3.attack("Alexa");
	bot4.takeDamange(11);

	bot3.attack("Robocop");
	bot2.takeDamange(5);
	bot2.beRepaired(4);
}

static void test_scravtrap(void) {
	ScavTrap bot1;
	ScavTrap bot2("Siri");
	ScavTrap bot3("Google");

	bot1.attack("Siri");
	bot2.takeDamange(42);

	bot3.attack("Siri");
	bot2.takeDamange(55);
	bot2.guardGate();
	bot2.beRepaired(40);
}

static void test_fragtrap(void) {
	FragTrap bot1;
	FragTrap bot2("J.A.R.V.I.S.");
	FragTrap bot3("R2-D2");

	bot1.attack("R2-D2");
	bot2.takeDamange(42);

	bot3.attack("J.A.R.V.I.S.");
	bot2.takeDamange(55);
	bot3.highFivesGuys();
	bot3.beRepaired(40);
}

static void test_diamondtrap(void) {
	DiamondTrap bot1;
	DiamondTrap bot2("HAL 9000");
	DiamondTrap bot3("WALL-E");

	bot1.attack("WALL-E");
	bot2.takeDamange(42);

	bot3.attack("HAL 9000");
	bot2.takeDamange(55);
	bot3.highFivesGuys();
	bot3.beRepaired(40);
	bot1.guardGate();
	bot2.whoAmI();
}

int main(void) {
	test_claptrap();
	std::cout << std::endl;
	test_scravtrap();
	std::cout << std::endl;
	test_fragtrap();
	std::cout << std::endl;
	test_diamondtrap();

	return 0;
}
