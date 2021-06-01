#ifndef _GRASS_HPP_
#define _GRASS_HPP_

#include "combat.hpp"

class Grass : public Combat {

public:
    Grass(string name, double health, double attack, double weaponStrength, double armor, string element) : Combat(name, health, attack, weaponStrength, armor, element) {}

    void calcAttack(Combat& enemy) {
        int chance = rand() % 100;
        if (chance < 75) {
            if (enemy.getElement() == "Grass") {
                double temp = (attack + weaponStrength) * 1.0;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << enemy.getName() << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
            else if (enemy.getElement() == "Fire") {
                double temp = (attack + weaponStrength) * 0.5;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << enemy.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
            else if (enemy.getElement() == "Water") {
                double temp = (attack + weaponStrength) * 1.5;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << enemy.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
        }
        else {
            cout << getName() << "'s attack missed. How clumsy!" << endl << endl;
        }

        if (enemy.getHealth() == 0) {
            setHealth(100);
        }
    }

    void calcEnemyAttack(Combat& player) {
        int chance = rand() % 100;
        if (chance < 50) {
            if (player.getElement() == "Grass") {
                double temp = (attack + weaponStrength) * 1.0;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << player.getName() << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
            else if (player.getElement() == "Fire") {
                double temp = (attack + weaponStrength) * 0.5;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << player.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
            else if (player.getElement() == "Water") {
                double temp = (attack + weaponStrength) * 1.5;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " grass damage to " << player.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
        }
        else {
            cout << getName() << "'s attack missed. How clumsy!" << endl << endl;
        }
    }

};
#endif //GRASS_HPP

