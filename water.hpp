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
        double damage();
        double getHealth();
	double setHealth(double);
        double getAttack();
	double setAttack(double);
        void display();

};

#endif //WATER_HPP

