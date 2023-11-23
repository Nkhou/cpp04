#include "Character.hpp"

Character::Character()
{
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(std::string const & name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

Character::Character(Character const & src)
{
    // this = new Character(src.name);
    this->name = src.name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = src.inventory[i];
}

Character & Character::operator=(Character const & rhs)
{
    this->name = rhs.name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = rhs.inventory[i];
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->inventory[i];
}

std::string const & Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return;
    if (this->inventory[idx] != NULL)
        this->inventory[idx]->use(target);
}

