#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete  this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    return (*this);
}

// void Dog::setIdeas(int index, std::string idea)
// {
//     this->brain->setIdeas(index, idea);
// }

// std::string Dog::getIdeas(int index) const
// {
//     return (this->brain->getIdeas(index));
// }

void Dog::makeSound() const
{
    std::cout << "woof !" << std::endl;
}
