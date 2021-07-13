/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 22:44:56 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/13 11:42:12 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
	public:
		HumanB(std::string name);

		void	setWeapon(Weapon& weapon);
		void	attack(void);
	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
