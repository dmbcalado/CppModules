/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 15:03:50 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Tereza("Tereza", 1);
	Bureaucrat Jorge("Jorge", 2);

	Tereza.getName();
	Tereza.getGrade();
	try{
		Jorge.DecreaseGrade();
		Tereza.IncreaseGrade();
		Jorge.DecreaseGrade();
	}
	catch (std::exception &error) {
		std::cerr << error.what() << std::endl;
	}
}