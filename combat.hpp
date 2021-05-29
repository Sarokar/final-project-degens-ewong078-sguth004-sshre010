#ifndef _COMBAT_HPP_
#define _COMBAT_HPP_

#include <iostream>
#include <string>

using namespace std:

class Combat : public overallText {
protected: 
	double health;
	double attack;
	double weaponStrength;
	double armor; 

public:
	Combat();
	Combat(double, double, double, double);
	virtual double calcAttack() = 0;
	virtual double calcArmour() = 0;
	double damage();
	double getHealth();
	double setHealth(double);
	double getAttack();
	double setAttack(double);
	double calcHPDef();
	
 	void display();

};

#endif //_COMBAT_HPP_
