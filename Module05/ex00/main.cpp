/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:23:45 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/14 19:58:36 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// GradeTooHighException should be hited in Tereza
	{
		Bureaucrat Tereza("Tereza", 1);
		Bureaucrat Jorge("Jorge", 2);
		try{
	
			std::cout << std::endl;
			std::cout << Tereza;
			std::cout << Jorge;
			Jorge.DecreaseGrade();
			Tereza.IncreaseGrade();
			Jorge.DecreaseGrade();
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	// GradeTooLowException should be hited in Jorge
	{
		Bureaucrat Tereza("Tereza", 1);
		Bureaucrat Jorge("Jorge", 149);
		try{
	
			std::cout << std::endl;
			Tereza.getName();
			Tereza.getGrade();
			Jorge.DecreaseGrade();
			Tereza.DecreaseGrade();
			Jorge.DecreaseGrade();
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
	std::cout << std::endl;
	// GradeTooLowException on creation
	{
		try{
			Bureaucrat Tereza("Tereza", 1);
			Bureaucrat Jorge("Jorge", 151);

			std::cout << std::endl;
			Tereza.getName();
			Tereza.getGrade();
			std::cout << Jorge;
			std::cout << Tereza;
		}
		catch (std::exception &error) {
			std::cerr << error.what() << std::endl;
		}
	}
}