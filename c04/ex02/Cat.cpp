/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:40:37 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 15:10:14 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
    Cat::Cat() {
        type = "Cat";
        std::cout << "Creating a Cat." << std::endl;
    }
    Cat::Cat(const Cat &cat)
    {
        *this = cat;
    }
    Cat &Cat::operator=(const Cat & cat)
    {
        if (this != &cat)
            type = cat.type;
        return (*this);
    }
    Cat::~Cat() {
        std::cout << "Destroying a Cat." << std::endl;
    }

    void Cat::makeSound() const {
        std::cout << "Meow!" << std::endl;
    }
