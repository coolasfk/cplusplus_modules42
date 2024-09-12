#ifndef ANIMAL_CPP
#define ANIMAL_CPP

#include <iostream>
#include <string>

class Animal
{
    protected:
    std::string _type;
    std::string _sound;
    public:
    Animal();
    Animal(std::string type);
    virtual ~Animal();

    //setters:
    void setType(std::string type);
    void setSound(std::string sound);

    //getters:
    std::string getType(void) const;
    std::string getSound(void) const;
    virtual void makeSound() const;
};

#endif

