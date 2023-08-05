/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:22:44 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 14:07:26 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* learnedMaterias[4];

public:
    MateriaSource();
    void learnMateria(AMateria* m);
    AMateria* createMateria(const std::string& type);
    MateriaSource(const MateriaSource &materiaSource);
    MateriaSource	&operator=(const MateriaSource &materiaSource);
    ~MateriaSource();
};
#endif
