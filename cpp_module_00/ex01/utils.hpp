/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:53:37 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/20 14:48:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include "const.hpp"
# include "Contact.hpp"

void printTable(int number_of_contacts, Contact contact_list[]);
void printTableHeader(void);
void printTableCell(std::string content);
void printTableRowDelimiter(void);
bool isInteger(const std::string& str);

#endif
