/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:39:47 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 15:10:08 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
class Cat : public AAnimal {
public:
    Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat & cat);
    ~Cat();
    void makeSound() const;
};
#endif
