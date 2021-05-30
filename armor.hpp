#ifndef __ARMOR_HPP__
#define __ARMOR_HPP__

#include "person.hpp"
#include <iostream>
#include <string.h>

class Armor : public Person {
    private:
        double defense;

    public:
        Armor(std::string name, double defaultDef) {
            setName(name);
            defense = defaultDef;
        }

        double setDef(double toSet) {
            defense = toSet;
        }

           //my interpretation but i dont think its that good tbh LOL

      virtual std::string evaluateText(std::string toEval) {
            if (toEval == "defense") {
                return std::to_string(defense);
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