/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:32:38 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:19:38 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() {
	type = "Dog";
	std::cout << "Creating a Dog." << std::endl;
}

Dog::~Dog() {
	std::cout << "Destroying a Dog." << std::endl;
}
Dog::Dog(const Dog &cat) {
    std::cout << " copy constructor." << std::endl;
            *this = cat;
        }

        Dog &Dog::operator=(const Dog & dog) {
            if (this != &dog)
                type = dog.type;
                std::cout << "  copy assignment operator." << std::endl;
            return (*this);
        }
void Dog::makeSound() const{
	std::cout << "Woof!" << std::endl;
}
