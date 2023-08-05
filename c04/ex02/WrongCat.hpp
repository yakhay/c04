/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 01:57:34 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:57:24 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat &wcat);
    WrongCat &operator=(const WrongCat & wcat);
    ~WrongCat();
    void makeSound() const;
};
#endif
