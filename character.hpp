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

        double setSpd(double toSet) {
            speed = toSet;
        }
        
        double setHP(double toSet) {
            hp = toSet;
        }

        double setAtt(double toSet) {
            attack = toSet;
        }

           //my interpretation but i dont think its that good tbh LOL

       virtual std::string evaluateText(std::string toEval) {

            if (toEval == "strength") {
                return std::to_string(speed);
            }
            else if (toEval == "hp") {
                return std::to_string(hp);
            }
             else if (toEval == "attack") {
                return std::to_string(attack);
            }
            else {
                return "invalid";
            }
        }

        virtual std::string display(std::string info) {
          return evaluateText(info);
        }

};





#endif