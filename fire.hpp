#ifndef _FIRE_HPP_
#define _FIRE_HPP_

#include "combat.hpp"

class Fire : public Combat {

public:
	Fire(string name, double health, double attack, double weaponStrength, double armor, string element) : Combat(name, health, attack, weaponStrength, armor, "Fire") {}

        void calcAttack(Combat& enemy){

                if(enemy.getElement() == "Fire"){
                        attack = weaponStrength * 1.0;
                        enemy.damage(attack);
                        cout << getName() << " dealt " << getAttack() << " fire damage to " << enemy.getName() << endl;
                }
                else if(enemy.getElement() == "Water"){
                        attack = weaponStrength * 0.5;
                        enemy.damage(attack);
                        cout << getName() << " dealt " << getAttack() << " fire damage to " << enemy.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
                }
                else if(enemy.getElement() == "Grass"){
                        attack = weaponStrength * 1.5;
                        enemy.damage(attack);
                        cout << getName() << " dealt " << getAttack() << " fire damage to " << enemy.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
                }
                
        }

};

#endif //FIRE_HPP
