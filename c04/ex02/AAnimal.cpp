/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:46:51 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:54:00 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
    AAnimal::AAnimal() {
        type = "Animal";
        std::cout << "Creating an Animal." << std::endl;
    }
    AAnimal::AAnimal(const std::string &name):type(name)
    {

    }
    AAnimal::AAnimal(const AAnimal &animal)
    {
        *this = animal;
    }
    AAnimal &AAnimal::operator=(const AAnimal &animal)
    {
        if (this != &animal)
            type = animal.type;
        return (*this);
    }
    AAnimal::~AAnimal() {
        std::cout << "Destroying an Animal." << std::endl;
    }

    std::string AAnimal::getType() const {
        return type;
    }

