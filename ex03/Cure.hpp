#ifndef Cure_HPP
#define Cure_HPP
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        virtual ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        AMateria *clone() const;
        void use(ICharacter &target);
};
#endif