/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:29:38 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 14:12:46 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
  MateriaSource::MateriaSource()
    {
        for (int i = 0; i < 4; ++i)
            learnedMaterias[i] = NULL;
    }

    void MateriaSource::learnMateria(AMateria* m)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (learnedMaterias[i] == NULL)
            {
                learnedMaterias[i] = m;
                return;
            }
        }
    }
    MateriaSource::MateriaSource(const MateriaSource &materiaSource)
    {
        *this = materiaSource;
    }
    MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource)
    {
        if (this != &materiaSource)
        {
            for (int i = 0; i < 4; i++)
            {
                // if (learnedMaterias[i])
                //     delete learnedMaterias[i];
                if (materiaSource.learnedMaterias[i])
                    learnedMaterias[i] = materiaSource.learnedMaterias[i]->clone();
                else
				    learnedMaterias[i] = NULL;
		    }
	    }
	    return (*this);
    }
    MateriaSource::~MateriaSource()
    {

    }

    AMateria* MateriaSource::createMateria(const std::string& type)
    {
        for (int i = 0; i < 4; ++i)
        {
            if (learnedMaterias[i] != NULL && learnedMaterias[i]->getType() == type)
                return learnedMaterias[i]->clone();
        }

        return NULL;
    }
