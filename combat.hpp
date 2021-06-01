#ifndef _COMBAT_HPP_
#define _COMBAT_HPP_

#include <iostream>
#include <string>

using namespace std;

    class Combat {
    protected:
        string name;
        double health;
        double attack;
        double weaponStrength;
        double armor;
        string element;
    public:
        Combat();
        Combat(string, double, double, double, double, string);
        virtual void calcAttack(Combat&) = 0;
        virtual void calcEnemyAttack(Combat&) = 0;
        void damage(double);
        string getName();
        void setName(string);
        double getHealth();
        void setHealth(double);
        double getAttack();
        void setAttack(double);
        string getElement();
        void setElement(string);
        double getArmor();
        void setArmor(double);
	void setWeapon(double);

};

#endif //_COMBAT_HPP_

