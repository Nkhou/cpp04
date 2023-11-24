/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:41:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 23:00:08 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
void f()
{
    system("leaks Materia");
}
int main()
{
    atexit(f);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
   delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    {
    
    AMateria *t = tmp;
    // delete t;
    (void )t;
    }
    delete tmp;
    me->unequip(1);
    me->unequip(10);
    me->unequip(3);
    me->unequip(4);
    me->unequip(1);
    me->unequip(0);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return (0);
}