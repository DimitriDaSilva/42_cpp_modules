/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   YellowPages.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:17:35 by dda-silv          #+#    #+#             */
/*   Updated: 2021/07/11 18:37:52 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YELLOWPAGES_HPP
# define YELLOWPAGES_HPP

# include <iostream>
# include <iomanip>
# include "const.hpp"
# include "Contact.hpp"

class YellowPages {
	private:
		Contact contact_list[MAX_NUMBER_OF_CONTACTS];
		int number_of_contacts{0};
	public:
		void addContact();
		void searchContact();
};

void	printTableHeader();

#endif
