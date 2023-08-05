/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:00:15 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:56:22 by yakhay           ###   ########.fr       */
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
     WrongAnimal::WrongAnimal(const std::string &name):type(name) {
    }
     WrongAnimal::WrongAnimal(const WrongAnimal &wanimal) {
        *this = wanimal;
    }
    WrongAnimal & WrongAnimal::operator=(const WrongAnimal &wanimal) {
        if (this != &wanimal)
            type = wanimal.type;
        return (*this);
    }
    std::string  WrongAnimal::getType() const {
        return type;
    }

    void  WrongAnimal::makeSound() const {
        std::cout << "Wrong sound." << std::endl;
    }
