/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:40:32 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/25 20:26:44 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Character.hpp"

Character::Character()
{
    this->name = "default";
    for (int i = 0; i < 4; i++)
    {
        this->garbage[i] = NULL;
        this->inventory[i] = NULL;
    }
}

Character::Character(std::string const & name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        this->inventory[i] = NULL;
        this->garbage[i] = NULL;
    }
}

Character::Character(Character const & src)
{
    *this =  src;
}

Character & Character::operator=(Character const & rhs)
{
    this->name = rhs.name;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            delete this->garbage[i];
            garbage[i] = NULL;
            this->inventory[i] = rhs.inventory[i];
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete this->garbage[i];
        delete this->inventory[i];
    }
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* materia)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            delete this->garbage[i];
            garbage[i] = NULL;
            this->inventory[i] = materia->clone();
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    if (this->inventory[idx] != NULL)
    {
        this->garbage[idx] = inventory[idx];
        this->inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return;
    if (this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
}

