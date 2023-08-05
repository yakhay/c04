/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:00:02 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 13:56:33 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>
#include <iostream>
class WrongAnimal {
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const std::string &name);
    WrongAnimal(const WrongAnimal &wanimal);
    WrongAnimal &operator=(const WrongAnimal &wanimal);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};


#endif
