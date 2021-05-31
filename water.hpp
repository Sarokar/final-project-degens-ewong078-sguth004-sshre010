#ifndef _WATER_HPP_
#define _WATER_HPP_

#include "combat.hpp"

class Water : public Combat {

public:
    Water(string name, double health, double attack, double weaponStrength, double armor, string element) : Combat(name, health, attack, weaponStrength, armor, element) {}

    void calcAttack(Combat& enemy) {

        if (enemy.getElement() == "Water") {
            double temp = (attack + weaponStrength) * 1.0;
            enemy.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << enemy.getName() << endl;
            cout << "Armor: " << enemy.getArmor() << endl;
            cout << "Health: " << enemy.getHealth() << endl;
        }
        else if (enemy.getElement() == "Grass") {
            double temp = (attack + weaponStrength) * 0.5;
            enemy.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << enemy.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
            cout << "Armor: " << enemy.getArmor() << endl;
            cout << "Health: " << enemy.getHealth() << endl;
        }
        else if (enemy.getElement() == "Fire") {
            double temp = (attack + weaponStrength) * 1.5;
            enemy.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << enemy.getName() << endl << "GOOD JOB, YOU USED WATER TO TAKE OUT FIRE! PogU" << endl;
            cout << "Armor: " << enemy.getArmor() << endl;
            cout << "Health: " << enemy.getHealth() << endl;
        }

        if (enemy.getHealth() == 0) {
            setHealth(100);
        }
    }

    void calcEnemyAttack(Combat& player) {

        if (player.getElement() == "Water") {
            double temp = (attack + weaponStrength) * 1.0;
            player.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << player.getName() << endl;
            cout << "Armor: " << player.getArmor() << endl;
            cout << "Health: " << player.getHealth() << endl << endl;
        }
        else if (player.getElement() == "Grass") {
            double temp = (attack + weaponStrength) * 0.5;
            player.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << player.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
            cout << "Armor: " << player.getArmor() << endl;
            cout << "Health: " << player.getHealth() << endl << endl;
        }
        else if (player.getElement() == "Fire") {
            double temp = (attack + weaponStrength) * 1.5;
            player.damage(temp);
            cout << getName() << " dealt " << temp << " water damage to " << player.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
            cout << "Armor: " << player.getArmor() << endl;
            cout << "Health: " << player.getHealth() << endl << endl;
        }

    }
};
#endif //WATER_HPP

