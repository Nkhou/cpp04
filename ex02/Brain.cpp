#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
        ideas[i] = "";
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    return (*this);
}

// void Brain::setIdeas(int index, std::string idea)
// {
//     this->ideas[index] = idea;
// }

// std::string Brain::getIdeas(int index) const
// {
//     return (this->ideas[index]);
// }
