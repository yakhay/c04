/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:09:49 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/10 16:39:23 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class AAnimal {
protected:
    std::string type;
public:
    AAnimal();
    AAnimal(const std::string &name);
    AAnimal(const AAnimal &animal);
    AAnimal &operator=(const AAnimal &animal);
    virtual ~AAnimal();
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif
