/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:42:27 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 12:32:11 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal {
public:
    WrongCat() ;
    WrongCat(const WrongCat &cat);
    WrongCat &operator=(const WrongCat & cat);
    ~WrongCat() ;
    void makeSound() const;
};
#endif

