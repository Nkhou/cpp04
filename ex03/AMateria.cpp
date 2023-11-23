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
    (void)target;
    std::cout << "AMateria"<<std::endl;
}
