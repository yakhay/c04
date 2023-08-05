/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:32:38 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:55:29 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() {
	type = "Dog";
	std::cout << "Creating a Dog." << std::endl;
}
	Dog::Dog(const Dog &cat)
	{
		*this = cat;
	}
	Dog &Dog::operator=(const Dog & dog)
	{
		if (this != &dog)
			type = dog.type;
		return (*this);
	}
Dog::~Dog() {
	std::cout << "Destroying a Dog." << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}
