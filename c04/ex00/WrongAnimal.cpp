/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:45:26 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:20:29 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
        type = "WrongAnimal";
        std::cout << "Creating a WrongAnimal." << std::endl;
    }

    WrongAnimal::~WrongAnimal() {
        std::cout << "Destroying a WrongAnimal." << std::endl;
    }

    std::string WrongAnimal::getType() const {
        return type;
    }
    WrongAnimal::WrongAnimal(const WrongAnimal &animal)
    {
        std::cout << " copy constructor." << std::endl;
        *this = animal;
    }
    WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
    {
        if (this != &animal)
            type = animal.type;
            std::cout << " copy assignment operator" << std::endl;
        return (*this);
    }
    void WrongAnimal::makeSound() const {
        std::cout << "Wrong sound." << std::endl;
    }
