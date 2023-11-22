#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
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

std::string Brain::identify() const
{
    std::stringstream ss;
    ss << this;
    return (ss.str());
}

void Brain::setIdea(int index, std::string idea)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    return (this->ideas[index]);
}

void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->ideas[i] << std::endl;
}