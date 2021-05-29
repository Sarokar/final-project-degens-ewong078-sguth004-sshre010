#ifndef _FIRE_HPP_
#define _FIRE_HPP_

#include "combat.hpp"

class Fire : public Combat {

private: 
	double weaponStrength;
	double armour;
	double health;
	double attack;
public:
	double calcAttack();
	double calcArmour();

};

#endif //FIRE_HPP
