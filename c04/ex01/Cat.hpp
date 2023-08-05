/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:14:57 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:48:39 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private :
        Brain* brain;
    public:
        Cat();
    Cat(std::string type);
    Cat(const Cat &cat);
   Cat &operator=(const Cat & cat);
    ~Cat();
    void makeSound() const;
};
#endif
