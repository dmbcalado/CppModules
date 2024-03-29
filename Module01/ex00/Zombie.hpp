/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendonc <dmendonc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:58:53 by dmendonc          #+#    #+#             */
/*   Updated: 2023/01/26 13:48:11 by dmendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <stdlib.h>
# include <iostream>
# include <string>
# include <cstring>
# include <new>

class Zombie
{
	public:

	//	Constructor & Destructor
	Zombie(std::string name);
	~Zombie();
	
	//	Functions
	void	announce(void);

	private:
	
	std::string Name;
} ;

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif