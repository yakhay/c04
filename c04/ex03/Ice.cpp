/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:14:59 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:16:14 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
	Ice::Ice() : AMateria("ice") {}

    AMateria* Ice::clone() const
    {
        return new Ice(*this);
    }
    Ice::Ice(const Ice &ice) : AMateria("ice")
    {
        *this = ice;
    }
    Ice	&Ice::operator=(const Ice &ice)
    {
        (void)ice;
        return (*this);
    }
    void Ice::use(ICharacter& target)
    {
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    }
    Ice::~Ice() {

    }

