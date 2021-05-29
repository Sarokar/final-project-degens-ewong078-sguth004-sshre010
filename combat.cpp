#include "combat.hpp"

Combat::Combat(){
	health = 0.0;
	attack = 0.0;
	weaponStrength = 0.0;
	armour = 0.0;
}

Combat::Combat(double _health, double _attack, double _weaponStrength, double _armour){
	health = _health;
	attack = _attack;
	weaponStrength = _weaponStrength;
	armour = _armour;
}

//double Combat::calcAttack(){
//	
//}

//double Combat::calcArmour(){
//	
//}

double Combat::damage(double d){
	health = health - d;
}

double Combat::getHealth(){
	return health;
}

double Combat::setHealth(double _health){
	health = _health;
}

double Combat::getAttack(){
	return attack;
}

double Combat::setAttack(double _attack){
	attack = _attack;
}

void Combat::display(){

}
