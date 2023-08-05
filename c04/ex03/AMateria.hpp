/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:47:41 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 18:04:37 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(const std::string& type) ;
    std::string const& getType() const;
    AMateria(const AMateria &aMateria);
    AMateria	&operator=(const AMateria &aMateria);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    virtual ~AMateria();
};
#endif
