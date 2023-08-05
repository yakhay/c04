/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:58:55 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:57:18 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
  WrongCat::WrongCat() {
        type = "WrongCat";
        std::cout << "Creating a WrongCat." << std::endl;
    }
    WrongCat::WrongCat(const WrongCat &wcat)
    {
        *this = wcat;
    }
    WrongCat &WrongCat::operator=(const WrongCat & wcat)
    {
        if (this != &wcat)
            type = wcat.type;
        return (*this);
    }
     WrongCat::~WrongCat() {
        std::cout << "Destroying a WrongCat." << std::endl;
    }

    void  WrongCat::makeSound() const{
        std::cout << "WrongAnimal sound." << std::endl;
    }
