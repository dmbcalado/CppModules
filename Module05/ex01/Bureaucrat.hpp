/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:48 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/16 17:33:16 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define  BUREAUCRAT_HPP

# include <exception>
# include <unistd.h>
# include <string>
# include <cstring>
# include <cstdlib>
# include <fstream>
# include <iostream>
# include <bits/stdc++.h>

class GradeTooHigh : public std::exception {
public:
	const char	*what() const throw() {
	std::cout << "\033[101m\033[1mToo high grade. No can do.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mToo high grade error.\033[0m");
}
} ;

class GradeTooLow : public std::exception {

public:
const char	*what() const throw() {
	std::cout << "\033[101m\033[1mToo low grade. No can do.\033[0m\n" << std::endl;
	return ("\033[103m\033[1mToo low grade error.\033[0m");
}
} ;


class Bureaucrat {

public:

	//Constructors & Destructors
	Bureaucrat();
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat &operator = (const Bureaucrat& obj);

	// Getters
	int			getGrade();
	std::string	getName();

	//Increase and Decrease grade
	void	IncreaseGrade();
	void	DecreaseGrade();

	// signing form
	void	signForm(std::string form_name, bool isSigned);

	GradeTooHigh GradeTooHighException;
	GradeTooLow GradeTooLowException;

private:
	const std::string	Name;
	int			Grade;

} ;

std::ostream &operator<<(std::ostream &stream, Bureaucrat &Bc);

#endif