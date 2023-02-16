/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:19:10 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:29:55 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade) {
	if (Grade < 1) {
		throw(Bureaucrat::GradeTooHighException);
	}
	else if (Grade >= 150) {
		throw(Bureaucrat::GradeTooLowException);
	}
	std::cout << "Bureaucrat " << Name;
	std::cout << " with grade = " << Grade;
	std::cout << " created." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name), Grade(obj.Grade) {
	std::cout << "Bureaucrat Copy Constructor called." ;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat& obj) {
	Grade = obj.Grade;
	return(*this);
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destroyed.";
	std::cout << std::endl;
}



std::string	Bureaucrat::getName() {
	return Name;
}

int	Bureaucrat::getGrade() {
	return Grade;
}

void	Bureaucrat::IncreaseGrade() {
	if (Grade > 1) {
		Grade--;
		std::cout << "Bureaucrat " << Name << " has climbed the letter." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooHighException);
	}
}

void	Bureaucrat::DecreaseGrade() {
	if (Grade < 150) {
		Grade++;
		std::cout << "Bureaucrat " << Name << " has lower in the ladder." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name << " has ";
		throw(Bureaucrat::GradeTooLowException);
	}
}

std::ostream& operator<<(std::ostream& stream, Bureaucrat& Bc) {
	stream << "Name : " << Bc.getName() << std::endl;
	stream << "Grade : " << Bc.getGrade() << "\n" << std::endl;
	return stream;
}