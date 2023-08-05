/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:36:59 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:25:31 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
        type = "Dog";
        brain = new Brain();
        std::cout << "Creating a Dog." << std::endl;
    }
    Dog::Dog(std::string type):Animal(type), brain(new Brain())
    {

    }
    Dog::~Dog() {
        std::cout << "Destroying a Dog." << std::endl;
        delete brain;
    }
    Dog::Dog(const Dog &cat)
    {
        std::cout << "copy constructor." << std::endl;
        this->brain = NULL;
        *this = cat;
    }
    Dog &Dog::operator=(const Dog & dog)
    {
        if (this != &dog)
        {
            if (this->brain)
                delete this->brain;
            type = dog.type;
            this->brain = new Brain;
            for (int i = 0; i < 100 ; i++)
                    this->brain->ideas[i] = dog.brain->ideas[i];
        }
        std::cout << "copy assignment operator." << std::endl;
        return (*this);
    }
    void Dog::makeSound() const{
        std::cout << "Woof!" << std::endl;
    }
