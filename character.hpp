#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "person.hpp"
#include <iostream>
#include <string>

class Character : public Person {
    private:
        double speed;
        double hp;
        double attack;

    public:
        Character(std::string name, double defaultSpd, double defaultHP, double defaultAtt) {
            setName(name);
            speed = defaultSpd;
            hp = defaultHP;
            attack = defaultAtt;
        }
        virtual void evaluateText();
        virtual void display();


};





#endif