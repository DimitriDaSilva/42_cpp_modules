/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:17:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 12:37:59 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YELLOWPAGES_HPP
# define YELLOWPAGES_HPP

#include <iostream>

typedef struct s_contact {
	std::string	first_name;
}				t_contact;

class YellowPages {
	private:
		t_contact	contact_list[8];
	public:
		YellowPages();
		void AddContact();
};

#endif
