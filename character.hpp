#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "person.hpp"
#include "combat.hpp"
#include <iostream>
#include <string>
#include "fire.hpp"
#include "grass.hpp"
#include "water.hpp"


class Character : public Person {
    private:
        double speed;
        double hp;
        double attack;
        std::string elementType;

        Fire fireType;
        Water waterType;
        Grass grassType;



    public:
        Character(std::string name, double defaultSpd, double defaultHP, double defaultAtt, std::string type) {
            setName(name);
            speed = defaultSpd;
            hp = defaultHP;
            attack = defaultAtt;
        
            if (type == "Fire") {
                elementType= "Fire";
                Fire temp(name,hp,attack,0, 0,elementType);
                fireType = temp;
               

            }

            if (type == "Water") {
                elementType= "Water";
               Water temp(name,hp,attack,0, 0,elementType);
               waterType = temp;
               
            }

            if (type == "Grass") {
                elementType= "Grass";
               Grass temp(name,hp,attack,0, 0,elementType);
               grassType = temp;
               
            }
        }



        double setSpd(double toSet) {
            speed = toSet;
        }
        
        double setHP(double toSet) {
            hp = toSet;
        }

        double setAtt(double toSet) {
            attack = toSet;
        }

        void newArmor(double armorIn) {
            if (elementType == "Fire") {
                fireType.setArmor(armorIn);
            }
            if (elementType == "Water") {
                waterType.setArmor(armorIn);
            }
            if (elementType == "Grass") {
                grassType.setArmor(armorIn);
            }
        }

        void newWeapon(double weaponIn) {
            if (elementType == "Fire") {
                fireType.setWeaponStrength(weaponIn);
            }
            if (elementType == "Water") {
                waterType.setWeaponStrength(weaponIn);
            }
            if (elementType == "Grass") {
                grassType.setWeaponStrength(weaponIn);
            }
        }

    

        virtual void display(std::string info) {
           evaluateText(info);
        }

        virtual void display(Character other, int characterType) {
           evaluateText(other, characterType);
        }

        virtual void evaluateText(string toEval) {
            if (toEval == "HP") {
                cout << hp;
            }
            if (toEval == "speed") {
                cout << speed;
            }
            if (toEval == "attack") {
                cout << attack;
            }
            if (toEval == "elementType") {
                cout << elementType;
            }
        }



        virtual void evaluateText(Character other, int characterType) { 
            if (characterType == 0) { // attacking enemy {
                if (elementType == "Fire") {
                    if (other.elementType == "Fire") { //attacking enemy
                        fireType.calcAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //attacking enemy
                        fireType.calcAttack(other.waterType);
                    }
                    else { //attacking enemy
                        fireType.calcAttack(other.grassType);
                    }
                }

                if (elementType == "Water") {
                    if (other.elementType == "Fire") { //attacking enemy
                        waterType.calcAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //attacking enemy
                        waterType.calcAttack(other.waterType);
                    }
                    else { //attacking enemy
                        waterType.calcAttack(other.grassType);
                    }
                }

                if (elementType == "Grass") {
                    if (other.elementType == "Fire") { //attacking enemy
                        grassType.calcAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //attacking enemy
                        grassType.calcAttack(other.waterType);
                    }
                    else { //attacking enemy
                        grassType.calcAttack(other.grassType);
                    }
                }
            }

            if (characterType == 1) { // enemy attacking  {
                if (elementType == "Fire") {
                    if (other.elementType == "Fire") { //enemy attacking
                        fireType.calcEnemyAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //enemy attacking
                        fireType.calcEnemyAttack(other.waterType);
                    }
                    else { //enemy attacking
                        fireType.calcEnemyAttack(other.grassType);
                    }
                }

                if (elementType == "Water") {
                    if (other.elementType == "Fire") { //enemy attacking
                        waterType.calcEnemyAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //enemy attacking
                        waterType.calcEnemyAttack(other.waterType);
                    }
                    else { //enemy attacking
                        waterType.calcEnemyAttack(other.grassType);
                    }
                }

                if (elementType == "Grass") {
                    if (other.elementType == "Fire") { //enemy attacking
                        grassType.calcEnemyAttack(other.fireType);
                    }
                    else if (other.elementType == "Water") { //enemy attacking
                        grassType.calcEnemyAttack(other.waterType);
                    }
                    else { //enemy attacking
                        grassType.calcEnemyAttack(other.grassType);
                    }
                }
            }
        }

        

};





#endif