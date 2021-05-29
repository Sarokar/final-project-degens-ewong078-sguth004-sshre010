#ifndef _WATER_HPP_
#define _WATER_HPP_

#include "combat.hpp"

class Water : public Combat {

private:
        double weaponStrength;
        double armour;
	double health;
	double attack;

public:
        double calcAttack();
        double calcArmour();

};

#endif //WATER_HPP

