/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:39:52 by nkhoudro          #+#    #+#             */
/*   Updated: 2023/11/24 14:39:53 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
    // const Animal* meta = new Animal();
    const Dog * j = new Dog();
    const Cat* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    // meta->makeSound();
    // const WrongAnimal* meta = new Animal();
    std::cout << "*****************"<<std::endl;
    const WrongAnimal* k = new WrongCat();
    k->makeSound();
    delete j;
    delete i;
    delete k;
    return 0;
}