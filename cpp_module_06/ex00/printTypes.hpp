/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printTypes.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:57:07 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 11:10:53 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_TYPES_HPP
# define PRINT_TYPES_HPP

# include "ABase.hpp"
# include "Char.hpp"
# include "Int.hpp"
# include "Float.hpp"
# include "Double.hpp"
# include "detectType.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <iomanip>
# include <climits>

void printTypes(ABase* type, std::string const& str_to_convert);
int getPrecision(std::string const& str_to_convert);

#endif
