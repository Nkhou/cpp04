#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default constructor WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "copy constructor WrongAnimal called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "assignation operator WrongAnimal called" << std::endl;
    this->type = copy.type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}
