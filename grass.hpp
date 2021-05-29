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
        double damage();
        double getHealth();
	double setHealth(double);
        double getAttack()
	double setAttack(double);
        void display();

};

#endif //GRASS_HPP

