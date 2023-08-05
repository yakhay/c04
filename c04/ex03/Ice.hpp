/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:14:17 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 18:06:45 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class Ice : public AMateria
{
public:
    Ice();
    ~Ice(); //
    Ice(const Ice &ice);
    Ice	&operator=(const Ice &ice);
    AMateria* clone() const;
    void use(ICharacter& target);
};
#endif
