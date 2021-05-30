#ifndef __WEAPONS_HPP__
#define __WEAPONS_HPP__

#include "person.hpp"
#include <iostream>
#include <iostream>
#include <string.h>

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

        double setStrn(double toSet) {
            strength = toSet;
        }

        std::string setElmnt(double toSet) {
            element = toSet;
        }

           //my interpretation but i dont think its that good tbh LOL

        virtual std::string evaluateText(std::string toEval) {
            if (toEval == "strength") {
                return std::to_string(strength);
            }
            else if (toEval == "element") {
                return toEval;
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