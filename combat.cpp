#include "combat.hpp"

Combat::Combat(){
	health = 0;
	attack = 0;
	weaponStrength = 0;
	armour = 0;
}

Combat::Combat(int _health, int _attack, int _weaponStrength, int _armour){
	health = _health;
	attack = _attack;
	weaponStrength = _weaponStrength;
	armour = _armour;
}

int Combat::calcAttack(){

}

int Combat::calcArmour(){

}

int Combat::damage(){


}

int Combat::getHealth(){
	return health;
}

int Combat::getAttack(){
	return attack;
}

void Combat::display(){

}
