#include "combat.hpp"
#include "fire.hpp"
#include "water.hpp"
#include "grass.hpp"
#include "character.hpp"

#include <iostream>

using namespace std;
int main() {

	cout << "=================================================" << endl;

	cout << "Fire vs. Grass Test\n\n";

    Character test1("Shane the Demon Lord", 20, 100, 20, "Fire");
    test1.newWeapon(10);
    test1.newArmor(50);
	Character enemy1("Sarokar the Car", 20, 100, 15, "Grass");
    enemy1.newWeapon(10);
    enemy1.newArmor(100);

    test1.display(enemy1, 0);
    test1.display(enemy1, 0);
    test1.display(enemy1, 0);
    test1.display(enemy1, 0);
    enemy1.display(test1,1);
    enemy1.display(test1,1);


	cout << "Player Health, expecting 100, got: ";
    test1.display("HP");
    cout << endl;

	cout << "Enemy Health, expecting 20, got: ";
    enemy1.display("HP");
    cout << endl;

	cout << "=================================================" << endl << endl;

	cout << "=================================================" << endl;

        cout << "Fire vs. Water Test\n\n";
        Character test2("Shane the Demon Lord", 20, 100, 20, "Fire");
        test2.newWeapon(10);
        test2.newArmor(100);
        Character enemy2("Edmund the Whale", 20, 100, 25, "Water");
        enemy2.newWeapon(10);
        enemy2.newArmor(100);

        test2.display(enemy2, 0);
        test2.display(enemy2, 0);
        test2.display(enemy2, 0);
        test2.display(enemy2, 0);
        enemy2.display(test2,1);
	enemy2.display(test2,1);
	enemy2.display(test2,1);

        cout << "Player Health, expecting 42.5, got: ";
        test2.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 100, got: ";
        enemy2.display("HP");
        cout << endl;

        cout << "================================================" << endl << endl;

	cout << "================================================" << endl;
    
    	cout << "Fire vs. Fire Test\n\n";
    	Character test3("Shane the Demon Lord", 20, 100, 20, "Fire");
        test3.newWeapon(10);
        test3.newArmor(100);
    	Character enemy3("Fierce Dragon", 20, 100, 50, "Fire");
        enemy3.newWeapon(0);
        enemy3.newArmor(50);

    	test3.display(enemy3, 0);
        test3.display(enemy3, 0);
    	enemy3.display(test3, 1);
    	enemy3.display(test3, 1);
        enemy3.display(test3, 1);


    	 cout << "Player Health, expecting 50, got: ";
        test3.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 90, got: ";
        enemy3.display("HP");
        cout << endl;


   	cout << "=================================================" << endl << endl;

	cout << "=================================================" << endl;

    	cout << "Water vs. Fire Test\n\n";
    	Character test4("Shane the Demon Lord", 20, 100, 35, "Water");
        test4.newWeapon(10);
        test4.newArmor(100);
    	Character enemy4("Demon Lord", 20, 100, 25, "Fire");
        enemy4.newWeapon(25);
        enemy4.newArmor(100);

    	test4.display(enemy4, 0);
        test4.display(enemy4, 0);
    	enemy4.display(test4, 1);
    
    	 cout << "Player Health, expecting 100, got: ";
        test4.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 65, got: ";
        enemy4.display("HP");
        cout << endl;
    
    	cout << "================================================" << endl << endl;

	cout << "================================================" << endl;

	cout << "Water vs. Grass Test\n\n";
	Character test5("Fierce Dolphin", 20, 100, 35, "Water");
    test5.newWeapon(10);
    test5.newArmor(100);
	Character enemy5("Car", 20, 100, 25, "Grass");
    enemy5.newWeapon(25);
    enemy5.newArmor(100);

	test5.display(enemy5, 0);
    test5.display(enemy5, 0);
    enemy5.display(test5, 1);

	cout << "Player Health, expecting 100, got: ";
        test5.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 100, got: ";
        enemy5.display("HP");
        cout << endl;
	
	cout << "================================================" << endl << endl;

	cout << "================================================" << endl;

    	cout << "Water vs. Water Test\n\n";
    	Character test6("Fierce Dolphin", 20, 100, 35,"Water");
        test6.newWeapon(10);
        test6.newArmor(100);
    	Character enemy6("Fish", 20, 100, 25, "Water");
        enemy6.newWeapon(25);
        enemy6.newArmor(100);

    	test6.display(enemy6, 0);
        test6.display(enemy6, 0);
        enemy6.display(test6, 1);
        enemy6.display(test6, 1);

    	cout << "Player Health, expecting 100, got: ";
        test6.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 100, got: ";
        enemy6.display("HP");
        cout << endl;

    	cout << "================================================" << endl << endl;
	
	cout << "================================================" << endl;

    	cout << "Grass vs. Fire Test\n\n";
    	Character test7("Car", 20, 100, 35, "Grass");
        test7.newWeapon(10);
        test7.newArmor(100);
    	Character enemy7("Milim Nava", 20, 100, 25, "Fire");
        enemy7.newWeapon(25);
        enemy7.newArmor(100);

    	test7.display(enemy7, 0);
        test7.display(enemy7, 0);
        enemy7.display(test7, 1);
        enemy7.display(test7, 1);

    	cout << "Player Health, expecting 50, got: ";
        test7.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 100, got: ";
        enemy7.display("HP");
        cout << endl;

    	cout << "================================================" << endl << endl;

    	cout << "================================================" << endl;

    	cout << "Grass vs. Water Test\n\n";
    	Character test8("Car",20, 100, 35, "Grass");
        test8.newWeapon(10);
        test8.newArmor(100);
    	Character enemy8("Rimuru",20,  100, 20,  "Water");
        enemy8.newWeapon(25);
        enemy8.newArmor(50);

    	test8.display(enemy8, 0);
        test8.display(enemy8, 0);
        enemy8.display(test8, 1);
        enemy8.display(test8, 1);

  	cout << "Player Health, expecting 100, got: ";
        test8.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 15, got: ";
        enemy8.display("HP");
        cout << endl;

    	cout << "================================================" << endl << endl;

    	cout << "================================================" << endl;

    	cout << "Grass vs. Grass Test\n\n";
    	Character test9("Car", 20, 100, 35, "Grass");
        test9.newWeapon(10);
        test9.newArmor(100);
    	Character enemy9("Rimuru", 20, 100, 20, "Grass");
        enemy9.newWeapon(25);
        enemy9.newArmor(50);
        
    	test9.display(enemy9, 0);
        test9.display(enemy9, 0);
        enemy9.display(test9, 1);
        enemy9.display(test9, 1);

   	cout << "Player Health, expecting 100, got: ";
        test9.display("HP");
        cout << endl;

        cout << "Enemy Health, expecting 60, got: ";
        enemy9.display("HP");
        cout << endl;

    	cout << "================================================" << endl << endl;	

	return 0;
}

