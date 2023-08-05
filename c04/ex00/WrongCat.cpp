/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:43:41 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:21:05 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
 	WrongCat::WrongCat() {
        type = "WrongCat";
        std::cout << "Creating a WrongCat." << std::endl;
    }

    WrongCat::~WrongCat() {
        std::cout << "Destroying a WrongCat." << std::endl;
    }
    WrongCat::WrongCat(const WrongCat &cat) {
        std::cout << "copy constructor." << std::endl;
        *this = cat;
    }
    WrongCat &WrongCat::operator=(const WrongCat & cat) {
        if (this != &cat)
            type = cat.type;
            std::cout << "copy assignment operator." << std::endl;
        return (*this);
    }
    void WrongCat::makeSound() const{
        std::cout << "Wrong Cat sound." << std::endl;
    }
