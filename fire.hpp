#ifndef _FIRE_HPP_
#define _FIRE_HPP_

#include "combat.hpp"

class Fire : public Combat {

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

#endif //FIRE_HPP
