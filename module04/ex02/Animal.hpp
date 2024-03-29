#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &New);
        Animal& operator=(const Animal &rhs);
        virtual void makeSound(void) const = 0;
        std::string getType() const;
        virtual ~Animal(); // virtual Destructor for call destructor in the child class
};

#endif