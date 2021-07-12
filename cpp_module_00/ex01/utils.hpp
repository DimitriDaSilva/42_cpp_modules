/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/12 12:08:22 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include "const.hpp"
# include "Contact.hpp"

void printTable(int number_of_contacts, Contact contact_list[]);
void printTableHeader();
void printTableCell(std::string content);
void printTableRowDelimiter();
bool isInteger(const std::string& str);

#endif
