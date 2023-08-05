/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:23:47 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:23:31 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
    Animal::Animal() {
        type = "Animal";
        std::cout << "Creating an Animal." << std::endl;
    }
    Animal::Animal(std::string &other) {
        this->type = other;
        std::cout << "Creating an Animal." << std::endl;
    }
    Animal::~Animal() {
        std::cout << "Destroying an Animal." << std::endl;
    }
    Animal::Animal(const Animal &animal)
    {
        std::cout << " copy constructor." << std::endl;
        *this = animal;
    }
    Animal &Animal::operator=(const Animal &animal)
    {
        if (this != &animal)
            type = animal.type;
        std::cout << " copy assignment operator)." << std::endl;
        return (*this);
    }
    std::string Animal::getType() const {
        return type;
    }

    void Animal::makeSound() const {
        std::cout << "Unknown sound." << std::endl;
    }
