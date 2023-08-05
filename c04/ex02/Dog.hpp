/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:30:04 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:55:32 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal {
public:
    Dog();
    Dog(const Dog &cat);
    Dog &operator=(const Dog & dog);
    ~Dog();
    void makeSound() const;
};
#endif
