/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinhosujo <ratinhosujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:12:19 by ratinhosujo       #+#    #+#             */
/*   Updated: 2023/02/05 15:12:20 by ratinhosujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"

// ------------- Constructor and Destructor -------------
Animal::Animal() {
	std::cout << "Animal Class created." << std::endl;
}

Animal::Animal(std::string name_type) {
	type = name_type;
	std::cout << "Animal Class created." ;
	std::cout << std::endl;
}

Animal::Animal(const Animal &obj) {
	type = obj.type;
	std::cout << "Animal Class created." ;
}

Animal &Animal::operator = (const Animal& obj) {
	this->type = obj.type;
	std::cout << "Animal Class copied." ;
	return(*this);
}

Animal::~Animal() {
	std::cout << "Animal Class destroyed.";
	std::cout << std::endl;
}

void	Animal::makeSound() const {
	std::cout << std::endl;
}

std::string	Animal::getType() const {
	if (!type.empty()){
		return type;
	}
	else{
		return "";
	}
}
