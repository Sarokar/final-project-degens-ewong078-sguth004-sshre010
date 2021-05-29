#ifndef _WATER_HPP_
#define _WATER_HPP_

#include "combat.hpp"

class Water : public Combat {

private:
        double weaponStrength;
        double armour;

public:
        double calcAttack();
        double calcArmour();
        double damage();
        double getHealth();
        double getAttack();
        void display();

};

#endif //WATER_HPP

