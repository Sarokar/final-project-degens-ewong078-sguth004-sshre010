#ifndef _FIRE_HPP_
#define _FIRE_HPP_

#include "combat.hpp"

class Fire : public Combat {

public:
    Fire() {}
    
    Fire(string name, double health, double attack, double weaponStrength, double armor, string element) : Combat(name, health, attack, weaponStrength, armor, element) {}

    void calcAttack(Combat& enemy) {
       // int chance = rand() % 100;
        //if (chance < 85) {
            if (enemy.getElement() == "Fire") {
                double temp = (attack + weaponStrength) * 1.0;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << enemy.getName() << endl << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
            else if (enemy.getElement() == "Water") {
                double temp = (attack + weaponStrength) * 0.5;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << enemy.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
            else if (enemy.getElement() == "Grass") {
                double temp = (attack + weaponStrength) * 1.5;
                enemy.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << enemy.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
                cout << "Armor: " << enemy.getArmor() << endl;
                cout << "Health: " << enemy.getHealth() << endl << endl;
            }
       // }
       // else
        //{
           // cout << getName() << "'s attack missed!" << endl << endl;
       // }
       
	 if (enemy.getHealth() == 0) {
            setHealth(100);
        }
    }

    void calcEnemyAttack(Combat& player) {
       // int chance = rand() % 100;
       // if (chance < 75) {
            if (player.getElement() == "Fire") {
                double temp = (attack + weaponStrength) * 1.0;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << player.getName() << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
            else if (player.getElement() == "Water") {
                double temp = (attack + weaponStrength) * 0.5;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << player.getName() << endl << "DO YOU NOT UNDERSTAND SIMPLE TYPE ADVANTAGES? ARE YOU A 3HEAD??" << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
            else if (player.getElement() == "Grass") {
                double temp = (attack + weaponStrength) * 1.5;
                player.damage(temp);
                cout << getName() << " dealt " << temp << " fire damage to " << player.getName() << endl << "IT WAS SUPER EFFECTIVE!" << endl;
                cout << "Armor: " << player.getArmor() << endl;
                cout << "Health: " << player.getHealth() << endl << endl;
            }
        //}
        //else {
           // cout << getName() << "'s attack missed! How clumsy!" << endl << endl;
        //}
    }
    
};

#endif //FIRE_HPP

