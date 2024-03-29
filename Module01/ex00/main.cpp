/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:32 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/26 13:50:02 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1 = newZombie("Mordido 1");
	Zombie *zombie2 = newZombie("Mordido 2");
	Zombie *zombie3 = newZombie("Mordido 3");

	zombie1->announce();
	zombie2->announce();
	zombie3->announce();

	std::cout << std::endl;
	delete zombie1;
	
	randomChump("Mordido 4");
	std::cout << std::endl;
	randomChump("Mordido 5");
	std::cout << std::endl;
	randomChump("Mordido 6");
	std::cout << std::endl;
	
	delete zombie2;
	delete zombie3;

	return 0;
}
