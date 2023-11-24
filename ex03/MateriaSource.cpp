/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:41:22 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 14:41:23 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
        this->materia[i] = src.materia[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const & rhs)
{
    int i = 0;
    while (i < 4)
    {
        this->materia[i] = rhs.materia[i];
        i++;
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        this->materia[i] = NULL;
        i++;
    }
}

void MateriaSource::learnMateria(AMateria* materia)
{
    int i = 0;
    while (i < 4)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = materia;
            return ;
        }
        i++;
    }
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
    int i;

    i = 0;
    while(i < 4)
    {
        if (this->materia[i]->getType() == type)
        {
    
            return (this->materia[i]);
        }
        i++;
    }
    return (NULL);
}