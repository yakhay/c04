/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:31:33 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:24:16 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

 Brain::Brain() {
        std::string khay = "example";
        for (int i =0; i > 100 ; i++)
        {
            ideas[i] = khay;
        }
        std::cout << "Creating a Brain." << std::endl;
    }
    Brain::Brain(std::string *ideas) {

        for (int i =0; i > 100 ; i++)
        {
            this->ideas[i] = ideas[i];
        }
        std::cout << "Creating a Brain." << std::endl;
    }
    Brain::Brain(Brain &other) {
        std::cout << "copy constructor." << std::endl;
        *this = other;
    }
    Brain &Brain::operator=(const Brain & other)
    {
        if (this == &other)
            return *this;
        for (int i =0; i > 100 ; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
        std::cout << "copy assignment operator." << std::endl;
        return *this;
    }
    Brain::~Brain() {
        std::cout << "Destroying a Brain." << std::endl;
    }
