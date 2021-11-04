/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/11/04 09:37:46 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

# include "const.hpp"
# include "Contact.hpp"

void printTable(int number_of_contacts, Contact contact_list[]);
void printTableHeader(void);
void printTableCell(std::string content);
void printTableRowDelimiter(void);
std::string intToString(int nb);
int stringToInt(const std::string& str);

#endif
