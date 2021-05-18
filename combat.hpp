#ifndef _COMBAT_HPP_
#define _COMBAT_HPP_

#include <iostream>
#include <string>

using namespace std:

class Combat : public overallText {
private: 
	double health;
	double attack;
	double weaponStrength;
	double armor; 

public:
	Combat();
	Combat(double, double, double, double);
	int calcAttack();
	int calcArmour();
	int damage();
	int getHealth();
	int getAttack();
	void display();

};

#endif //_COMBAT_HPP_
