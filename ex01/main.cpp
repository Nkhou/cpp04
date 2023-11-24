/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:38:46 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 20:11:19 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const int n = 1;
    const Animal* animals[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < n; i++)
        delete animals[i];
    delete j;
    delete i;
    return 0;
}