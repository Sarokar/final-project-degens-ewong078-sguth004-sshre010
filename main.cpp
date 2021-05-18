#include <iostream>
//#include "combat.hpp"
//#include "itemNames.hpp"
//#include "names.hpp"
//#include "overallText.hpp"
//#include "playerNames.hpp"
#include <string>
#include <unistd.h>

using namespace std;

void longDelay() {
usleep(3000000);
}


void delay() {
usleep(1500000);
}

int main() { // I think we will just implement the story through main and call for classes and their functions throug main

// could implement saves somehow.....
cout << "==============================================================" << endl;
cout << "BLADEHEART by Edmund Wong, Sarokar Shrestha, and Shane Guthrie" << endl;
cout << "==============================================================" << endl;
longDelay(); // I might implement this different for each word but for now this is good enough
cout << "Once upon a time in a land far far away......" << endl;
delay();
cout << "There once was a boy.... a very good, strong boy!" << endl;
delay();
cout << "............" << endl;
delay();
cout << "What was his name again? i forgot..." << endl;
delay();
cout << "please type in your name" << endl;
string user = "";
cin >> user;;
longDelay();
//playername User;
//User(user);
cout << "Ah yes! Thats the one! <name>" << endl;
delay();
//cout << User.getName();
cout << "Now <name> here really is a good kid." << endl;
delay();
cout << "Isn't that right, <name>?" << endl;
delay();
string ans = "Yes";
//while(ans != "Yes" || ans != "No") {
//cout << "Yes or No?" << endl; 
//cin >> ans;
//}
longDelay();
if(ans == "Yes") {
cout << "Splendid! At least I remembered something!" << endl;
delay();
}
else if(ans == "No") {
cout << "HUH! does that mean your a... bad boy? O_O" << endl;
delay();
}





}
