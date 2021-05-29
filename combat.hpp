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
	double calcAttack();
	double calcArmour();
	double damage();
	double getHealth();
	double setHealth(double);
	double getAttack();
	double setAttack(double);
	double calcHPDef();
	
	void display();

};

#endif //_COMBAT_HPP_
