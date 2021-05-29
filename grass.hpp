#ifndef _GRASS_HPP_
#define _GRASS_HPP_

#include "combat.hpp"

class Grass : public Combat {

private:
        double weaponStrength;
        double armour;
	double health;
	double attack;
public:
        double calcAttack();
        double calcArmour();
  
};

#endif //GRASS_HPP

