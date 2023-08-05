/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:09:49 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:48:02 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>



class Animal {
protected:
    std::string type;
public:
    Animal();
    Animal(std::string &other);
    Animal(const Animal &animal);
    Animal &operator=(const Animal &animal);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
