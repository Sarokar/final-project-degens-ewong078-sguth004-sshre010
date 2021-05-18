#ifndef _COMBAT_HPP_
#define _COMBAT_HPP_

#include <iostream>
#include <string>

using namespace std:

class Combat : public overallText {
private: 
	int health;
	int attack;
	int weaponStrength;
	int armor; 

public:
	Combat();
	Combat(int, int, int, int);
	int calcAttack();
	int calcArmour();
	int damage();
	int getHealth();
	int getAttack();
	void display();

};

#endif //_COMBAT_HPP_
