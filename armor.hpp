#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include "person.hpp"
#include <iostream>
#include <string>

class Armor : public Person {
    private:
        double defense;

    public:
        Armor(std::string name, double defaultDef) {
            setName(name);
            defense = defaultDef;
        }
        virtual void evaluateText();
        virtual void display();


};





#endif