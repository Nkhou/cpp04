#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
    int i;
    i = 0;
    std::cout << "Cat assignation operator called" << std::endl;
    this->brain = new Brain(*copy.brain);
    this->type = copy.type;
    return (*this);
}
// void Cat::setIdeas(int index, std::string idea)
// {
//     this->brain->setIdeas(index, idea);
// }

// std::string Cat::getIdeas(int index) const
// {
//     return (this->brain->getIdeas(index));
// }

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

