#include "combat.hpp"
#include "fire.hpp"
#include "water.hpp"
#include "grass.hpp"

#include <iostream>

using namespace std;
int main() {

	cout << "=================================================" << endl;

	cout << "Fire vs. Grass Test\n\n";
	Fire test1("Shane the Demon Lord", 100, 20, 10, 50, "Fire");
	Grass enemy1("Sarokar the Car", 100, 15, 10, 100, "Grass");
	test1.calcAttack(enemy1);
	test1.calcAttack(enemy1);
	test1.calcAttack(enemy1);
	test1.calcAttack(enemy1);
	enemy1.calcAttack(test1);
	enemy1.calcAttack(test1);

	cout << endl << "Player Armor, expecting 25, got: " << test1.getArmor() << endl;
	cout << "Player Health, expecting 100, got: " << test1.getHealth() << endl;
	cout << "Enemy Armor, expecting 0, got: " << enemy1.getArmor() << endl;
	cout << "Enemy Health, expecting 20, got: " << enemy1.getHealth() << endl;

	cout << "=================================================" << endl << endl;

	cout << "=================================================" << endl;

        cout << "Fire vs. Water Test\n\n";
        Fire test2("Shane the Demon Lord", 100, 20, 10, 100, "Fire");
        Water enemy2("Edmund the Whale", 100, 25, 10, 100, "Water");
        test2.calcAttack(enemy2);
        test2.calcAttack(enemy2);
        test2.calcAttack(enemy2);
        test2.calcAttack(enemy2);
        enemy2.calcAttack(test2);
        enemy2.calcAttack(test2);
	enemy2.calcAttack(test2);

        cout << endl << "Player Armor, expecting 0, got: " << test2.getArmor() << endl;
        cout << "Player Health, expecting 42.5, got: " << test2.getHealth() << endl;
        cout << "Enemy Armor, expecting 40, got: " << enemy2.getArmor() << endl;
        cout << "Enemy Health, expecting 100, got: " << enemy2.getHealth() << endl;

        cout << "================================================" << endl << endl;

	cout << "================================================" << endl;
    
    	cout << "Fire vs. Fire Test\n\n";
    	Fire test3("Shane the Demon Lord", 100, 20, 10, 100, "Fire");
    	Fire enemy3("Fierce Dragon", 100, 50, 0, 50, "Fire");
    	test3.calcAttack(enemy3);
    	test3.calcAttack(enemy3);
    	enemy3.calcEnemyAttack(test3);
    	enemy3.calcEnemyAttack(test3);
    	enemy3.calcEnemyAttack(test3);

    	cout << endl << "Player Armor, expecting 0, got: " << test3.getArmor() << endl;
    	cout << "Player Health, expecting 50, got: " << test3.getHealth() << endl;
    	cout << "Enemy Armor, expecting 10, got: " << enemy3.getArmor() << endl;
    	cout << "Enemy Health, expecting 90, got: " << enemy3.getHealth() << endl;

   	cout << "=================================================" << endl << endl;

	cout << "=================================================" << endl;

    	cout << "Water vs. Fire Test\n\n";
    	Water test4("Fierce Dolphin", 100, 35, 10, 100, "Water");
    	Fire enemy4("Demon Lord", 100, 25, 25, 100, "Fire");
    	test4.calcAttack(enemy4);
    	test4.calcAttack(enemy4);
    	enemy4.calcEnemyAttack(test4);
    
    	cout << endl << "Player Armor, expecting 75, got: " << test4.getArmor() << endl;
    	cout << "Player Health, expecting 100, got: " << test4.getHealth() << endl;
    	cout << "Enemy Armor, expecting 0, got: " << enemy4.getArmor() << endl;
   	cout << "Enemy Health, expecting 65, got: " << enemy4.getHealth() << endl;
    
    	cout << "================================================" << endl << endl;

	cout << "================================================" << endl;

	cout << "Water vs. Grass Test\n\n";
	Water test5("Fierce Dolphin", 100, 35, 10, 100, "Water");
	Grass enemy5("Car", 100, 25, 25, 100, "Grass");
	test5.calcAttack(enemy5);
	test5.calcAttack(enemy5);
	enemy5.calcEnemyAttack(test5);

	cout << endl << "Player Armor, expecting 25, got: " << test5.getArmor() << endl;
    	cout << "Player Health, expecting 100, got: " << test5.getHealth() << endl;
    	cout << "Enemy Armor, expecting 55, got: " << enemy5.getArmor() << endl;
    	cout << "Enemy Health, expecting 100, got: " << enemy5.getHealth() << endl;	
	
	cout << "================================================" << endl << endl;

	cout << "================================================" << endl;

    	cout << "Water vs. Water Test\n\n";
    	Water test6("Fierce Dolphin", 100, 35, 10, 100, "Water");
    	Water enemy6("Fish", 100, 25, 25, 100, "Water");
    	test6.calcAttack(enemy6);
    	test6.calcAttack(enemy6);
    	enemy6.calcEnemyAttack(test6);
    	enemy6.calcEnemyAttack(test6);

    	cout << endl << "Player Armor, expecting 0, got: " << test6.getArmor() << endl;
    	cout << "Player Health, expecting 100, got: " << test6.getHealth() << endl;
    	cout << "Enemy Armor, expecting 10, got: " << enemy6.getArmor() << endl;
    	cout << "Enemy Health, expecting 100, got: " << enemy6.getHealth() << endl;

    	cout << "================================================" << endl << endl;
	
	cout << "================================================" << endl;

    	cout << "Grass vs. Fire Test\n\n";
    	Grass test7("Car", 100, 35, 10, 100, "Grass");
    	Fire enemy7("Milim Nava", 100, 25, 25, 100, "Fire");
    	test7.calcAttack(enemy7);
    	test7.calcAttack(enemy7);
    	enemy7.calcEnemyAttack(test7);
    	enemy7.calcEnemyAttack(test7);

    	cout << endl << "Player Armor, expecting 0, got: " << test7.getArmor() << endl;
    	cout << "Player Health, expecting 50, got: " << test7.getHealth() << endl;
    	cout << "Enemy Armor, expecting 55, got: " << enemy7.getArmor() << endl;
    	cout << "Enemy Health, expecting 100, got: " << enemy7.getHealth() << endl;

    	cout << "================================================" << endl << endl;

    	cout << "================================================" << endl;

    	cout << "Grass vs. Water Test\n\n";
    	Grass test8("Car", 100, 35, 10, 100, "Grass");
    	Water enemy8("Rimuru", 100, 20, 25, 50, "Water");
    	test8.calcAttack(enemy8);
    	test8.calcAttack(enemy8);
    	enemy8.calcEnemyAttack(test8);
    	enemy8.calcEnemyAttack(test8);

    	cout << endl << "Player Armor, expecting 55, got: " << test8.getArmor() << endl;
    	cout << "Player Health, expecting 100, got: " << test8.getHealth() << endl;
    	cout << "Enemy Armor, expecting 0, got: " << enemy8.getArmor() << endl;
    	cout << "Enemy Health, expecting 15, got: " << enemy8.getHealth() << endl;

    	cout << "================================================" << endl << endl;

    	cout << "================================================" << endl;

    	cout << "Grass vs. Grass Test\n\n";
    	Grass test9("Car", 100, 35, 10, 100, "Grass");
    	Grass enemy9("Rimuru", 100, 20, 25, 50, "Grass");
    	test9.calcAttack(enemy9);
    	test9.calcAttack(enemy9);
    	enemy9.calcEnemyAttack(test9);
    	enemy9.calcEnemyAttack(test9);

   	cout << endl << "Player Armor, expecting 10, got: " << test9.getArmor() << endl;
    	cout << "Player Health, expecting 100, got: " << test9.getHealth() << endl;
    	cout << "Enemy Armor, expecting 0, got: " << enemy9.getArmor() << endl;
    	cout << "Enemy Health, expecting 60, got: " << enemy9.getHealth() << endl;

    	cout << "================================================" << endl << endl;	

	return 0;
}
