#ifndef _COMBAT_HPP_
#define _COMBAT_HPP_

#include <iostream>
#include <string>

using namespace std:

class Combat : public overallText {
//private: 
//	double health;
//	double attack;
//	double weaponStrength;
//	double armor; 

public:
	Combat();
	Combat(double, double, double, double);
	virtual double calcAttack() = 0;
	virtual double calcArmour() = 0;
	virtual double damage() = 0;
	virtual double getHealth() = 0;
	virtual	double setHealth(double) = 0;
	virtual double getAttack() = 0;
	virtual double setAttack(double) = 0;
	double calcHPDef();
	
 	void display();

};

#endif //_COMBAT_HPP_
