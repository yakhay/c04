/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:39:47 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 12:29:47 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal {
public:
    Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat& cat);
    ~Cat();
    void makeSound() const;
};
#endif


