/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakhay <yakhay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 02:26:04 by yakhay            #+#    #+#             */
/*   Updated: 2023/07/14 19:14:03 by yakhay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
Character::Character(const std::string& name) : name(name)
    {
        for (int i = 0; i < 4; i++)
            inventory[i] = NULL;
    }

    Character::Character(const Character& other)
    {
        for(int i = 0; i < 4; i++)
            this->inventory[i] = NULL;

        *this = other;
    }

   Character& Character::operator=(const Character& other)
    {
        if (this == &other)
            return *this;

        name = other.name;

        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i] != NULL)
            {
                if (inventory[i] != NULL)
                    delete inventory[i];
                inventory[i] = other.inventory[i]->clone();
            }
        }

        return *this;
    }

    Character::Character() : name("default")
    {
        for (int i = 0; i < 4; i++)
        {
            inventory[i] = NULL;
        }
    }

    Character::~Character()
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i] != NULL)
                delete inventory[i];
        }
    }

    std::string const& Character::getName() const
    {
        return name;
    }

    void Character::equip(AMateria* m)
    {
        for (int i = 0; i < 4; i++)
        {
            if (inventory[i] == NULL)
            {
                inventory[i] = m;
                return;
            }
        }
    }

    void Character::unequip(int idx)
    {
        if (idx >= 0 && idx < 4)
            inventory[idx] = NULL;
    }

    void Character::use(int idx, ICharacter& target)
    {
        if (idx >= 0 && idx < 4 && inventory[idx] != NULL)
            inventory[idx]->use(target);
    }

    Character* Character::clone() const
    {
        return new Character(*this);
    }
