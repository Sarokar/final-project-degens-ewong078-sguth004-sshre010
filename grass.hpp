#ifndef _GRASS_HPP_
#define _GRASS_HPP_

#include "combat.hpp"

class Grass : public Combat {

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

#endif //GRASS_HPP

