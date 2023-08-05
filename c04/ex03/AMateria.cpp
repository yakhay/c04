/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:22:38 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 18:05:34 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
AMateria::AMateria(const std::string& type) : type(type) {}
AMateria::AMateria() {}
std::string const& AMateria::getType() const
{
	return type;
}
AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;
}
AMateria	&AMateria::operator=(const AMateria &aMateria)
{
	if (this != &aMateria)
		type = aMateria.type;
	return (*this);
}
AMateria::~AMateria(){

}
