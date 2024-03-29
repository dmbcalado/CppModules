/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:29:32 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/26 14:51:35 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	N = 10;
	Zombie *zombiehorde = zombieHorde(N, "Mordido");
	
	std::cout << std::endl;
	for (int i = 0; i < N; i++){
		std::cout << i << ": ";
		zombiehorde[i].announce();
	}
	std::cout << std::endl;
	delete[] zombiehorde;
	return 0;
}
