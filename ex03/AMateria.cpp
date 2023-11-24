/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:40:21 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 17:15:50 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{ 
}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
AMateria::~AMateria()
{
}
AMateria & AMateria::operator=(AMateria const & rhs)
{
    this->type = rhs.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria "<< target.getName() <<std::endl;
}
