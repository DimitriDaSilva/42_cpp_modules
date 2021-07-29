/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:28:17 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/29 19:52:05 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool isChar(std::string const& str) {
	if (str.length() == 1 && std::isprint(str[0])) {
		return true;
	} else {
		return false;
	}
}
