/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dda-silv <dda-silv@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 09:41:02 by dda-silv          #+#    #+#             */
/*   Updated: 2021/08/04 11:43:07 by dda-silv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main(void) {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	//[...]

	mstack.push(0);

	//MutantStack<int>::iterator it = mstack.begin();
	//MutantStack<int>::iterator ite = mstack.end();

	//++it;
	//--it;
	//while (it != ite) {
		//std::cout << *it << std::endl;
		//++it;
	//}

	//std::stack<int> s(mstack);

	return 0;
}
