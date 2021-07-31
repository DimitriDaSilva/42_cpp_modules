/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:28:16 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/31 11:39:48 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTTYPE_HPP
# define DETECTTYPE_HPP


# include "ABase.hpp"
# include "Char.hpp"
# include "Int.hpp"
# include "Float.hpp"
# include "Double.hpp"
# include <iostream>
# include <string>
# include <sstream>
# include <climits>

ABase* getType(std::string const& str_to_convert);
bool isChar(std::string const& str);
bool isInt(std::string const& str);
bool isFloat(std::string const& str);
bool isDouble(std::string const& str);
bool strisalpha(std::string const& str);

#endif
