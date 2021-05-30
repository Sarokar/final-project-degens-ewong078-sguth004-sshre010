#ifndef __WEAPONS_HPP__
#define __WEAPONS_HPP__

#include "person.hpp"
#include <iostream>
#include <string>

class Weapons : public Person {
    private:
        double strength;
        std::string element;

    public:
        Weapons(std::string name, double defaultStrn, std::string defaultElmnt) {
            setName(name);
            strength = defaultStrn;
            element = defaultElmnt;
        }
        virtual void evaluateText();
        virtual void display();


};





#endif