/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 09:43:20 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/24 10:25:50 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
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

	return 0;
}
