#include "combat.hpp"

Combat::Combat() {
    name = "";
    health = 0.0;
    attack = 0.0;
    weaponStrength = 0.0;
    armor = 0.0;
    element = "";
}

Combat::Combat(string _name, double _health, double _attack, double _weaponStrength, double _armor, string _element) {
    name = _name;
    health = _health;
    attack = _attack;
    weaponStrength = _weaponStrength;
    armor = _armor;
    element = _element;
}

void Combat::damage(double d) {
    if (armor <= 0) {
        health -= d;
    }
    else {
        armor -= d;
    }

    if (armor < 0) {
        health += armor;
        armor = 0;
    }

    if (health < 0) {
        health = 0;
    }
}

string Combat::getName() {
    return name;
}

void Combat::setName(string _name) {
    name = _name;
}

double Combat::getHealth() {
    return health;
}

void Combat::setHealth(double _health) {
    health = _health;
}

double Combat::getAttack() {
    return attack;
}

void Combat::setAttack(double _attack) {
    attack = _attack;
}

double Combat::getArmor() {
    return armor;
}

void Combat::setArmor(double _armor) {
    armor = _armor;
}

string Combat::getElement() {
    return element;
}

void Combat::setElement(string _element) {
    element = _element;
}

void Combat::setWeapon(double _weapon){
    weaponStrength = _weapon;
}
