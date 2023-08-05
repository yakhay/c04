/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:20:38 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:49:31 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Dog : public Animal {
    private :
        Brain* brain;
    public:
    Dog();
    Dog(const Dog &cat);
    Dog &operator=(const Dog & dog);
    Dog(std::string type);
    ~Dog();

    void makeSound() const;
};
#endif
