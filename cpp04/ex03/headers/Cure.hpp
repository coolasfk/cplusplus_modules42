#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Utils.hpp"

class Cure: public AMateria
{
    public:
    Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif