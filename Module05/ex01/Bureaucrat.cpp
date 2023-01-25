
#include "Bureaucrat.hpp"

//				BUREAUCRAT FUNCTIONS
// ------------- Standard Constructor-------------
Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat created." << std::endl;
}

// ------------- Parameterized Constructor-------------
Bureaucrat::Bureaucrat(std::string name, int grade) {
	Name = name;
	if (grade > 0 && grade < 150) {
		Grade = grade;
	}
	else if (grade < 1) {
		throw(Bureaucrat::GradeTooHighException());
	}
	else if (grade > 150) {
		throw(Bureaucrat::GradeTooLowException());
	}
	std::cout << "Bureaucrat " << Name << std::endl;
	std::cout << "With grade: " << Grade << std::endl;
	std::cout << "created." << std::endl;
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
		std::cout << "Bureaucrat" << Name << " has climbed the letter." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name;
		throw(Bureaucrat::GradeTooHighException());
	}
}

void	Bureaucrat::DecreaseGrade() {
	if (Grade < 150) {
		Grade++;
		std::cout << "Bureaucrat " << Name << " has lower in the ladder." << std::endl;
	}
	else {
		std::cout << "Bureaucrat " << Name;
		throw(Bureaucrat::GradeTooHighException());
	}
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	std::cout << " is already the best. No way to climb being the Top G.\n" << std::endl;
	return ("He already is the best");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	std::cout << " is the worst already. Time to fire him.\n" << std::endl;
	return ("He already is the worst");
}