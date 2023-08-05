/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:32:47 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:24:53 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
   Cat::Cat() {
            type = "Cat";
            brain = new Brain();
            std::cout << "Creating a Cat." << std::endl;
        }
    Cat::Cat(std::string type):Animal(type), brain(new Brain())
    {

    }
    Cat::~Cat() {
        std::cout << "Destroying a Cat." << std::endl;
        delete brain;
    }
    Cat::Cat(const Cat &cat)
    {
        std::cout << " copy constructor." << std::endl;
        this->brain = NULL;
        *this = cat;
    }
   Cat &Cat::operator=(const Cat & cat)
    {
        if (this != &cat)
        {
            if (this->brain)
                delete this->brain;
            type = cat.type;
            this->brain = new Brain;
            for (int i = 0; i < 100 ; i++)
                    this->brain->ideas[i] = cat.brain->ideas[i];
        }
        std::cout << " copy assignment operator." << std::endl;
        return (*this);
    }
    void Cat::makeSound() const{
        std::cout << "Meow!" << std::endl;
    }
