/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:20:52 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 18:10:09 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
Cure::Cure() : AMateria("cure") {}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}
Cure::Cure(const Cure &cure) : AMateria("cure")
{
	*this = cure;
}
Cure	&Cure::operator=(const Cure &cure)
{
	(void)cure;
	return (*this);
}
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {

}
