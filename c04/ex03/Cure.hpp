/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:19:53 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 18:06:22 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    Cure(const Cure &cure);
    Cure	&operator=(const Cure &cure);
    AMateria* clone() const;
    void use(ICharacter& target);
};
#endif
