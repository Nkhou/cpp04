#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "default constructor Animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "destructor Animal called" << std::endl;
}
Animal::Animal(std::string type)
{
    std::cout << "constructor Animal called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "copy constructor Animal called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "assignation operator Animal called" << std::endl;
    this->type = copy.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}
